//#include <stdio.h>
//#include <stdlib.h>
#include "libft.h"

int	ft_atoi(const	char *str)
{
	int	n;
	int	sign;
	int	i;

	n = 0;
	i = 0;
	sign = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\r'
		|| str[i] == '\r' || str[i] == '\v' || str[i] == '\f')
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		n = n * 10 + (str[i] - '0');
		i++;
	}
	return (sign * n);
}
/*int main()
{
    char arr[20] = "-+46zx";
    printf("%d\n", ft_atoi(arr));
    printf("%d\n", atoi(arr));

}*/
