#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s || fd < 0)
		return ;
	while (*s != '\0')
	{
		ft_putchar_fd(*s, fd);
		s++;
	}
}
/*int		main()
{
	char *str;

	str = "Tu as bon";
	ft_putstr_fd(str, 1);
}*/
