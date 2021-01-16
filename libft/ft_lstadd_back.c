#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{	
	t_list	*i;

	if (!lst || !new)
		return (0);
	i = *lst;
	while (i->next)
		i = i->next;
	i->next = new;
}
