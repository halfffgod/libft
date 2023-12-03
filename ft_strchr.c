//#include <stdio.h>
//#include <string.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	a;
	int		i;

	a = c;
	i = 0;
	while (s[i] != '\0' && s[i] != a)
		i++;
	if (s[i] == a)
		return ((char *)(s + i));
	return (NULL);
}
/*int main () {
   const char s[] = "";
   const char c = 'd';
   char *r;
   char *t;

   r = strchr(s, c);
   t = ft_strchr(s, c);
   printf("%s\n", r);
   printf("%s\n", t);
   
   return(0);
}*/
