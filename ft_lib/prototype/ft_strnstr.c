/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liafigli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 09:21:08 by liafigli          #+#    #+#             */
/*   Updated: 2021/01/12 17:02:55 by liafigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	int i;
	int j;
	
	i = 0;
	if (!big || !null)
		return (NULL);
	while (big[i] && i  < len)
	{
		j = 0;
		while(big[i + j] && little[j] && i + j < len && big[i + j] == little[j])
		{
			j++;
			if (little[j])
				return ((char *)(big + i));
		}
		i++;
	}	
}
