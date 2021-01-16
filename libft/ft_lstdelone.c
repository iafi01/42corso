#include "libft.h"

void ft_lstdelone(t_list *lst, void (*del)(void
*))
{
	if (!lst || !dst)
		return (NULL);
	del(lst->content);
	free(lst);
}
