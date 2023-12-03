#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	const char	nl = '\n';

	if (!s || fd < 0)
		return ;
	while (*s != '\0')
	{
		ft_putchar_fd(*s, fd);
		s++;
	}
	write(fd, &nl, 1);
}
/*int		main()
{
	char *str;

	str = "Tu as bon";
	ft_putstr_fd(str, 1);
}*/
