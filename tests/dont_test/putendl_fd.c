#include<fcntl.h>
#include<unistd.h>
#include"libft.h"
#include"testing.h"

int     main(void)
{
    char    *str1;
    char    *str2;
    int     fd;

    str1 = "ft_putendl_fd works";
    str2 = "it really does";
    fd = open("test_putendl.txt", O_CREAT | O_RDWR, 0777);
    ft_putendl_fd(str1, fd);
    ft_putendl_fd(str2, fd);
    close(fd);
    return(0);
}