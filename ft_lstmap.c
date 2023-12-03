#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst1;
	t_list	*lst2;

	lst2 = NULL;
	if (!lst)
		return (NULL);
	while (lst != NULL)
	{
		lst1 = ft_lstnew(f(lst->content));
		if (lst1 == NULL)
		{
			ft_lstclear(&lst, del);
			return (NULL);
		}
		ft_lstadd_back(&lst2, lst1);
		lst = lst->next;
	}
	return (lst2);
}
