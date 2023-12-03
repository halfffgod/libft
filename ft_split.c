//#include <stdio.h>
#include "libft.h"

size_t	words(char const *s, char c)
{
	size_t	i;
	size_t	t;

	i = 0;
	t = 0;
	while (*s)
	{
		if (*s != c && t == 0)
		{
			t = 1;
			i++;
		}
		else if (*s == c)
			t = 0;
		s++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	start;
	size_t	end;
	size_t	i;

	start = 0;
	end = 0;
	i = 0;
	if (!s)
		return (0);
	str = (char **)malloc(((words(s, c) + 1)) * sizeof(char *));
	if (!str)
		return (0);
	while (i < words(s, c))
	{
		while (s[start] == c)
			start++;
		end = start;
		while (s[end] != c && s[end])
			end++;
		str[i++] = ft_substr (s, start, (end - start));
		start = end;
	}
	str[i] = 0;
	return (str);
}
