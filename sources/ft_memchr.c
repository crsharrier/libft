#include<stdio.h>
#include<string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	const unsigned char *p;

	p = s;
	i = 0;
	while(i < n)
	{
		if(*s == c)
			return(s);
		s++;
		i++;
	}
	return(NULL);
}

int	main()
{
	int i;
	char *buffer[11];

	strcpy(buffer, "helloWorld");
	i = 0;

	printf("buffer = ");
	while(i < 11)
		printf("%c", buffer[i++]);
	printf("\n");
	i = 0;
	printf("memchr(buffer, 'W', 11) = %p", memchr(buffer, 'W', 11));
	printf("\n");
	printf("memchr(buffer, 'W', 3) = %p", memchr(buffer, 'W', 3));
	printf("\n");

	return(0);
}
