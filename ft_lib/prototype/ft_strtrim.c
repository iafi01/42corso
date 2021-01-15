/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liafigli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 16:44:00 by liafigli          #+#    #+#             */
/*   Updated: 2021/01/15 16:44:44 by liafigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
