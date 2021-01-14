#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t i;
	size_t j;
	size_t start;
	size_t len;

	i = 0;
	len = 0;
	start = 0;
	if (!s1)
		return (NULL);
	while (s1[i])
	{
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j] || s1[i] == set[j - 1])
			{
				if (start == 0)
					start = i;
				if (start > len)
					len = start;
				j++;
				i++;
			}
		}
		i++;
	}
	return (ft_substr(s1,start,len));
}
