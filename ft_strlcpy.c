#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t len)
{
	unsigned int	i;
	unsigned int	r;

	i = 0;
	r = 0;
	while (src[r] != '\0')
		r++;
	if (len < 1)
		return (r);
	while (src[i] != '\0' && i < len - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (r);
}
/*int main() {
    char dest[20] = "wallah acbar";
    char src[20] = "not ur type";
	printf("%lu\n", strlcpy(dest, src, 9));
	printf("%s\n", dest);
   	//printf("%lu\n", ft_strlcpy(dest, src, 9));
    //printf("%s\n", dest);

    return 0;
}*/
