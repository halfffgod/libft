#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*i;
	size_t	max;

	max = count * size;
	if (max > SIZE_MAX)
		return (NULL);
	i = malloc(max);
	if (i == NULL)
		return (NULL);
	ft_bzero(i, max);
	return (i);
}
