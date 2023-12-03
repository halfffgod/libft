//#include <stdio.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (dst == '\0' && src == '\0')
		return (0);
	if ((size_t)dst - (size_t)src < len)
	{
		i = len - 1;
		while (i >= 0 && i < len)
		{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i--;
		}
	}
	else
	{
		while (i < len)
		{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
		}
	}
	return (dst);
}
