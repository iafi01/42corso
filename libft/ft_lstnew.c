#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *temp;

	temp = (t_list *)malloc(sizeof(t_list));
	if (!temp)
		return (0);
	else
	{
		temp->content = content;
		temp->next = NULL;
	}
	return (temp);
}
