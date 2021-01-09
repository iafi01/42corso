#include <libft.h>
//copia da s2 a s1 fino a len o fino a quando non trova c
void	*ft_memccpy(void *s1, const void *s2, int c, size_t len)
{
    size_t i;

    i = 0;
    if (!s1 && !s2)
		return (0);
    while (i < len)
    {
        ((unsigned char *)s1)[i] = ((unsigned char *)s2)[i];
        if ((unsigned char)c == ((unsigned char *)s2)[i])
            return(s1);  
        i++;
    }
    return (s1);
}