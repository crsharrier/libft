#include<fcntl.h>
#include<unistd.h>
#include "../libft.h"
#include"testing.h"

int     main(void)
{
    char    *str;
    int     fd;

    str = "ft_putstr_fd works";
    fd = open("test_putstr.txt", O_CREAT | O_RDWR, 0777);
    ft_putstr_fd(str, fd);
    close(fd);
    return(0);
}