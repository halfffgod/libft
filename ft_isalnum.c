#include "libft.h"

int	ft_isalnum(int a)
{
	if ((a >= '0' && a <= '9')
		|| (a >= 'a' && a <= 'z')
		|| (a >= 'A' && a <= 'Z'))
		return (1);
	else
		return (0);
}
