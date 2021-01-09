#include <libft.h>
//trasforma la stringa in una sequenza di caratteri c lunga len
void *ft_memset(void *b, int c, size_t len )
{
    size_t i;
    
    i = 0;
    if (!b)
        return (0);
    while (i < len)
    {
        ((unsigned char *)b)[i] = c;
        i++;
    }
    return (b);
}