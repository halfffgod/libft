//#include <stdio.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((void *)(s + i));
			i++;
	}
	return (0);
}
/*int main()
{
	char arr[] = "wallah acbar";
	int c = 'b';

	printf("%s\n", ft_memchr(arr, c, 11));
}*/
