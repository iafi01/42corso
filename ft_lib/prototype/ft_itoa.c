/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liafigli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 14:05:09 by liafigli          #+#    #+#             */
/*   Updated: 2021/01/15 16:12:12 by liafigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*func(char *str, int i, int n, int d)
{
	int		sign;

	sign = (n < 0) ? -1 : 1;
	str = malloc(i + d);
	if (!str)
		return (NULL);
	str[i + d - 1] = 0;
	(sign > 0) ? i-- : i;
	while (n > 0)
	{
		str[i--] = n % 10 + '0';
		n /= 10;
	}
	str[i] = (sign < 0) ? '-' : '+';
	return (str);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*str;
	int		sign;
	int		d;
	int		nb;

	i = 0;
	d = 1;
	nb = n;
	sign = 1;
	if (n < 0)
	{
		sign = -1;
		n *= -1;
		++d;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	n = nb * sign;
	str = func(str, i, n, d);	
	return (str);
}
