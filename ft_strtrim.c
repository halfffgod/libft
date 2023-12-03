#include "libft.h"
//#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	n;

	if (*s1 == '\0')
		return (ft_strdup(""));
	str = 0;
	if (s1 && set)
	{
	n = ft_strlen(s1) - 1;
	i = 0;
		while (s1[i] && ft_strchr(set, s1[i]))
			i++;
		while (i < n && ft_strchr(set, s1[n]))
			n--;
		str = ft_substr(s1, i, n - i + 1);
	}
	return (str);
}
/*int main()
{
	char *str = " abcwallahabca ";
	char *set = " a";
	printf("%s\n", ft_strtrim(str, set));
}*/
