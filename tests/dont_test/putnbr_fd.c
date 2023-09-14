#include<fcntl.h>
#include<unistd.h>
#include"libft.h"
#include"testing.h"
#include<limits.h>

int     main(void)
{
    int     fd;

    fd = open("test_putnbr.txt", O_CREAT | O_RDWR, 0777);
    //ft_putnbr_fd(3007, fd);
    //ft_putnbr_fd(INT_MAX, fd);
    ft_putnbr_fd(INT_MIN, fd);
    close(fd);
    return(0);
}