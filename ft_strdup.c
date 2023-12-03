#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char		*str;
	size_t		i;

	i = 0;
	str = (char *)malloc(sizeof(*s1) * (ft_strlen((char *)s1) + 1));
	if (!str)
		return (0);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = 0;
	return (str);
}

/*int main()
{
    char source[] = "GeeksForGeeks";

       char* target = ft_strdup(source);

    printf("%s", target);
    return 0;
}*/
