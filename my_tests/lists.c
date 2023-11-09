#include "libft.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void del_string(void *ptr)
{
    char *str;

    str = (char *)ptr;
    while (*str)
        *str++ = 0;
    free(ptr);
}

void print_string(char *str)
{
    while (*str)
        write(1, str++, 1);
}

void print_tabs(int indent)
{
    while (indent--)
        printf("\t");
}

void print_node(t_list *node, int indent)
{
    print_tabs(indent);
    printf("====================\n");
    print_tabs(indent);
    printf("Node address = %p\n", node);
    print_tabs(indent);
    printf("Node content address = %p\n", node->content);
    print_tabs(indent);
    printf("Node content =");
    if (node->content)
        printf("\033[1;32m %s\033[0m", (char *)node->content);
    printf("\n");
    print_tabs(indent);
    printf("Next address = %p\n", node->next);
    print_tabs(indent);
    printf("Next node =\n");
    if (node->next)
        print_node(node->next, indent + 1);
    print_tabs(indent);
    printf("====================\n");
}

void    inc_string(void *ptr)
{
    int     i;
    char    *str;

    str = (char *)ptr;
    i = 0;
    while(str[i])
        str[i++] += 1;
}

void    *inc_string_return(void *ptr)
{
    int     i;
    char    *str;

    str = (char *)ptr;
    i = 0;
    while(str[i])
        str[i++] += 1;
    return ((void*)str);
}

int main(void)
{
    t_list *node1;
    t_list *node2;
    t_list *node3;
    char *content1;
    char *content2;
    char *content3;

    content1 = malloc(sizeof(char) * 30);
    content2 = malloc(sizeof(char) * 30);
    content3 = malloc(sizeof(char) * 30);

    strcpy(content1, "First Node");
    strcpy(content2, "Second Node");
    strcpy(content3, "Third Node");

    node1 = ft_lstnew(content1);
    node2 = ft_lstnew(content2);
    node3 = ft_lstnew(content3);

    ft_lstadd_front(&node2, node1);
    ft_lstadd_back(&node1, node3);

    //Size should be 3
    printf("List size = %i\n", ft_lstsize(node1));

    //Should print 3 nodes
    print_node(node1, 0);

    //ft_lstdelone(node3, free);
    //ft_lstclear(&node1, free);

    //inc_string(content1);
    //printf("result for inc_string(content1) = %s\n", content1);
    
    
    //ft_lstiter(node1, inc_string);
    //Should print 3 nodes, incremented
    //print_node(node1, 0);

    node1 = ft_lstmap(node1, inc_string_return, free);
    //Should print 3 nodes, incremented
    print_node(node1, 0);
    

    //node2->next = 0;

    //Should print 2 nodes
    //print_node(node1, 0);


    return (0);
}

//STILL TO DO:
//delone, clear, iter, map