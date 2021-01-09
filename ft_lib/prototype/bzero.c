#include <libft.h>
//chiamo memset utilizzando lo zero della ascii come secondo parametro
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}