#include<fcntl.h>
#include<unistd.h>
#include"libft.h"
#include"testing.h"

int     main(void)
{
    char    c;
    char    *name;
    int     fd;

    c = 'y';
    name = "test_putchar.txt";
    fd = open(name , O_CREAT | O_RDWR, 0777);
    ft_putchar_fd(c, fd);
    close(fd);
    return(0);
}