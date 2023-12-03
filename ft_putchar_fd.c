#include <unistd.h>
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{	
	write(fd, &c, 1);
}
/*int main()
{
	char c = 'a';
	int fd = 0;
	ft_putchar_fd(c, fd);
}*/
