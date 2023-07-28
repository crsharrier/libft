from enum import Enum
from notion.client import NotionClient
import os

class FunctionStatus(Enum):
    EMPTY = 'empty'
    IN_PROGRESS = 'in progress'
    TESTED = 'tested'


class libft_function:

    def __init__(self, name):
        self._status = FunctionStatus.EMPTY
        self.name = name
        self.test_exists = False

    @property
    def status(self):
        return self._status
    

def search_for_pattern_recursively(pattern, status_dir):
    for root, _, files in os.walk(status_dir):
        for file in files:
            if file == pattern:
                return True
    return False

def create_instances(txt_file):
    instances = []
    
    # Read function names from the txt file
    with open(txt_file, 'r') as f:
        function_names = [line.strip() for line in f.readlines()]

    # Create instances and set their status based on file existence
    for function_name in function_names:
        function_instance = libft_function(function_name)

        if search_for_pattern_recursively(f"ft_{function_name}.c", "./tested"):
            function_instance._status = FunctionStatus.TESTED
        elif search_for_pattern_recursively(f"ft_{function_name}.c", "./in_progress"):
            function_instance._status = FunctionStatus.IN_PROGRESS

        if search_for_pattern_recursively(f"testft_{function_name}.c", "./tests"):
            function_instance.test_exists = True

        instances.append(function_instance)

    return instances

# Hard-code the path to your .txt file here:
txt_file_path = "functions_list.txt"  

instances = create_instances(txt_file_path)

# Printing the status and test_exists property of each instance
for instance in instances:
    print(f"Function Name: {instance.name},\t Status: {instance.status.value},\t Test Exists: {instance.test_exists}")
    

def check_database_for_tasks(database_id, instances):
    # Initialize Notion API client
    notion_token = 'secret_8azd41OqLgUHt7hLT1H8i2aPuWAlhtRUXIpbVwiOE1n'  # Replace this with your Notion API integration token
    client = NotionClient(token_v2=notion_token)

    # Access the Notion database
    database = client.get_collection_view(database_id)

    for instance in instances:
        function_name = instance.name
        # Check if a task with the same name exists in the Notion database
        result = database.build_query(filter={'title': {'equals': function_name}}).execute()

        if result:
            instance._status = FunctionStatus.TESTED
            instance.test_exists = True

    return instances

database_id = 'Libft-ba12f17c6d1841fcbae6c9f94ebaaae2'
instances_with_tasks = check_database_for_tasks(database_id, instances)
