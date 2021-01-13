/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liafigli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 08:52:24 by liafigli          #+#    #+#             */
/*   Updated: 2021/01/12 09:15:08 by liafigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int i;
	unsigned char *str;
	unsigned int chr;
	unsigned int len;

	str = s;
	chr = c;
	len = ft_strlen(str) - 1;
	i = len;
	while (str[i])
	{
		if (str[i] == chr)
			return (str + i);
		i--;
	}
	return (0);
}