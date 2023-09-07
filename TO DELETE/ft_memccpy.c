#include<stdio.h>
#include<strings.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
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
		if(p_src[i] == c)
			return(dest);
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
	memccpy(dest_buffer, src, 'o', 11);
	printf("dest_buffer after memccpy(dest_buffer, src, 'o', 11) = ");
	while(i < 11)
		printf("%c", dest_buffer[i++]);
	printf("\n");

	printf("ft_dest_buffer before = ");
	while(i < 11)
		printf("%c", ft_dest_buffer[i++]);
	printf("\n");
	i = 0;
	ft_memccpy(ft_dest_buffer, src, 'o', 11);
	printf("ft_dest_buffer after ft_memccpy(ft_dest_buffer, src, 'o', 11) = ");
	while(i < 11)
		printf("%c", ft_dest_buffer[i++]);
	printf("\n");

	return(0);
}
