/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liafigli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 15:05:30 by liafigli          #+#    #+#             */
/*   Updated: 2021/01/16 09:03:40 by liafigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	const char		*s3;
	const char		*s4;

	i = 0;
	s3 = s1;
	s4 = s2;
	while (s3 && s4 && n--)
	{
		if (s3[i] != s4[i])
			return (((char *)s3)[i] - ((char *)s4)[i]);
		i++;
	}
	return (0);
}
