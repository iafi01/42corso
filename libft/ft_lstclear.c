#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void
*))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	tmp = *lst;
	while (tmp)
	{
		tmp = tmp->next;
		del(lst->content);
		free(lst);
		lst = tmp;
	}
	*lst = 0;
}
