//#include <stdio.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	n;

	i = 0;
	if (!haystack)
		return (0);
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0')
	{
		n = 0;
		while (haystack[i + n] == needle[n] && (i + n) < len)
		{
			if (haystack[i + n] == '\0' && needle[n] == '\0')
				return ((char *)&haystack[i]);
				n++;
		}
		if (needle[n] == '\0')
			return ((char *)haystack + i);
			i++;
	}
	return (0);
}
/*int main() {
    char arr[] = "wallah";
    char brr[] = "d";
    
    printf("%s\n", ft_strnstr(arr, brr, 3));
    printf("%s\n", strnstr(arr, brr, 3));
    return 0;
}*/
