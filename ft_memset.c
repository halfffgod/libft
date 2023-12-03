//#include <stdio.h>
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	if (!b && len == 0)
		return (0);
	while (i < len)
	{
		*(char *)(b + i) = (char)c;
		i++;
	}	
	return (b);
}
/*int main()
{
	char arr[20] = "wallah acbar";
	int c = '.';
//	memset(arr, c, 6);
//	printf("%s\n", arr);
	ft_memset(arr, c, 6);
	printf("%s\n", arr);
}*/
