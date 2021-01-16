/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liafigli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 08:52:24 by liafigli          #+#    #+#             */
/*   Updated: 2021/01/16 09:00:14 by liafigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	const char		*str;
	char			chr;
	unsigned int	len;

	str = s;
	chr = c;
	len = ft_strlen(str) - 1;
	i = len;
	while (str[i])
	{
		if (str[i] == chr)
			return (((char *)str) + i);
		i--;
	}
	return (0);
}
