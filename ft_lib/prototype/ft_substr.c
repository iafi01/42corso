/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liafigli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 17:23:45 by liafigli          #+#    #+#             */
/*   Updated: 2021/01/13 08:59:16 by liafigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t i;
	size_t j;
	char *str;

	i = 0;
	j = 0;
	str = (char *)malloc((len + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	while (s[i])
	{
		if (i >= start && i <= len )
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	return (str);
}

