#include<stdio.h>
#include<strings.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	unsigned char *p_dest;
	const unsigned char *p_src;

	p_dest = dest;
	p_src = src;
	i = 0;
	while(i < n)
	{
		p_dest[i] = (unsigned char)p_src[i];
		i++;
	}
	return(dest);
}

int	main()
{
	int i;
	char *src;
	char dest_buffer[11];
	char ft_dest_buffer[11];

	i = 0;
	src = "helloWorld";

	printf("dest_buffer before = ");
	while(i < 11)
		printf("%c", dest_buffer[i++]);
	printf("\n");
	i = 0;
	memcpy(dest_buffer, src, 11);
	printf("dest_buffer after memcpy(dest_buffer, src, 11) = ");
	while(i < 10)
		printf("%c", dest_buffer[i++]);
	printf("\n");

	printf("ft_dest_buffer before = ");
	while(i < 11)
		printf("%c", ft_dest_buffer[i++]);
	printf("\n");
	i = 0;
	ft_memcpy(ft_dest_buffer, src, 11);
	printf("ft_dest_buffer after memcpy(ft_dest_buffer, src, 11) = ");
	while(i < 10)
		printf("%c", ft_dest_buffer[i++]);
	printf("\n");

	return(0);
}
