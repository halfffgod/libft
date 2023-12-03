#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*s;

	s = ft_lstlast(*lst);
	if (lst)
	{
		if (*lst)
			s -> next = new;
		else
			*lst = new;
	}
}
