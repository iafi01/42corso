#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),
void (*del)(void *))
{
	t_list *tmp;
	t_list *i;
	
	if (!lst || !f)
		return ;
	tmp = NULL;
	while (lst)
	{
		if (!(i = ft_lstnew((f)(lst->content))))
		{
			ft_lstclear(&tmp, del);
			return (NULL);
		}
		ft_lstadd_back(&tmp, i);
		lst = lst->next;
		i = i->next;
	}
	return (tmp);
}
