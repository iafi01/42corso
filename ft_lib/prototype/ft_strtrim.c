#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t i;
	size_t j;
	size_t start;
	size_t len;
	char *str;

	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!str)
		return (NULL);
	while (s1[i])
	{
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j] || s1[i] == set[j - 1])
			{
				if (start == NULL)
					start = i;
				if (start > len)
					len = start;
				j++;
				i++;
			}
		}
		i++;
	}
	str = s;
	return (ft_substr(str,start,len));
}
