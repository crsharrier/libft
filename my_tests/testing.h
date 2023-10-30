#include<stdio.h>
#include<string.h>

void	print_chars(char *ptr, int size)
{
	int	i;

	i = 0;
	while(i < size)
		printf("%c", ptr[i++]);
}

int     count_str_if(char **tab, int (*f)(char*))
{
        int     count;

        count = 0;
        while (*tab)
        {
			if ((*f)(*tab++))
				count++;
        }
        return (count);
}

int     check_int_int(int *nb, size_t len, int (*f)(int))
{
        int     pass;

        pass = 1;
        while (len)
        {
	        len--;
                if ((*f)(nb[len]) == 0)
			pass = 0;
        }
        return (pass);
}

int     compare_outputs_int_int(int *arr, size_t len, int (*f1)(int), int (*f2)(int))
{
        int     pass;

        pass = 1;
        while (len)
        {
                len--;
                printf("ft_result(%i) = %i\nog_result(%i) = %i\n", arr[len], (*f1)(arr[len]), arr[len], (*f2)(arr[len])); 
                if ((*f1)(arr[len]) != (*f2)(arr[len]))
                        pass = 0;
        }
        return (pass);
}

int     compare_outputs_charptr_constcharptr(char **arr, size_t len, char*(*f1)(const char*), char*(*f2)(const char*))
{
        int     pass;

        pass = 1;
        while (len)
        {
                len--;
                printf("ft_result(%s) = %s\nog_result(%s) = %s\n", arr[len], (*f1)(arr[len]), arr[len], (*f2)(arr[len])); 
                if (strcmp((*f1)(arr[len]), (*f2)(arr[len])) != 0)
                        pass = 0;
        }
        return (pass);
}

void    ok_ko(char *name, int pass)
{
    if (pass == 1)
		printf("\033[32m%s = OK!\n", name);
	else
		printf("\033[31m%s = KO!\n", name);
	printf("\033[0m");
}