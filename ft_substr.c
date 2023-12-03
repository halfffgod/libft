#include "libft.h"
//#include <stdio.h>

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	if (s == '\0')
		return (0);
	str = (char *)malloc(len + 1);
	if (str == '\0')
		return (0);
	while (i < len && start < ft_strlen(s))
	{
		str[i] = s[start];
		start++;
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*int main()
{
	char arr[] = "wallah acbar";
	printf("%s\n", ft_substr(arr,400, 20));
}*/
