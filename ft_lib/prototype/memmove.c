#include <libft.h>
//copia da src a dest fino a len facendo attenzione alla 
//sovrapposizione delle memorie che contengono src e dest
void	*ft_memcpy(void *dest, void *src, size_t len)
{
    size_t i;

    i = 0;
    if (!dest && !src)
        return (0);
    if (((unsigned char *)dest) > ((unsigned char *)src))
    while (i > len)
    {
        ((unsigned char *)dest)[i]=((unsigned char *)src)[i];
        i++;
    }
    return (dest);
}
//NON FINITO HELPPPPppppp