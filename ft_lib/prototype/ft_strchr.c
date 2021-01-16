/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liafigli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 08:50:06 by liafigli          #+#    #+#             */
/*   Updated: 2021/01/16 09:01:50 by liafigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t			i;
	const char		*str;
	char			chr;

	i = 0;
	str = s;
	chr = c;
	while (str[i])
	{
		if (str[i] == chr)
			return (((char *)str) + i);
		i++;
	}
	return (0);
}
