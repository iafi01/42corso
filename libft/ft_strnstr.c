/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liafigli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 09:21:08 by liafigli          #+#    #+#             */
/*   Updated: 2021/01/17 13:28:27 by liafigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == 0)
		return (((char *)big));
	while (big[i] && i < n)
	{
		j = 0;
		while (big[i + j] && little[j] && i + j < n && big[i + j] == little[j])
		{
			j++;
			if (little[j])
				return ((char *)(big + i));
		}
		i++;
	}
	return (0);
}
