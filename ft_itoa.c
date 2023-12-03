#include "libft.h"
//#include <stdio.h>

int	dig(int n)
{	
	int	i;

	i = 0;
	if (n <= 0)
		i = 1;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;

	i = dig(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	str = (char *)malloc((i + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (n == 0)
		str[0] = '0';
	str[i] = '\0';
	if (n < 0)
	{	
		str[0] = '-';
		n *= (-1);
	}
	while (i-- && n != 0)
	{
		str[i] = n % 10 + '0';
		n /= 10;
	}
	return (str);
}
/*int main()
{
	int n = -2147483648;
	printf("%s\n", ft_itoa(n));
}*/
