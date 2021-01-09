#include <libft.h>
//fa un ciclo fino ad n bytes cercando il carattere c, se lo trova stampa tutta la stringa rimanente
// altrimenti null
void	*ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    
    i = 0;
    while (i < n)
    {
        if (((unsigned char *)s[i]) == (unsigned char)c)
        {
            return ((void*)(s + i));
        }
        i++;
    }
    return (0);
}