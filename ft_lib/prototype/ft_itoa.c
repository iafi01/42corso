/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liafigli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 14:05:09 by liafigli          #+#    #+#             */
/*   Updated: 2021/01/14 18:01:33 by liafigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int i;
	char *str;
	int sign;
	int d;
	int nb;

	i = 1;
	d = 1;
	nb = n;
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
	str = malloc(i + d);
	str[i] = 0;
	i--;
	n = nb * sign;
	while (n > 0)
	{
		str[i--] = n % 10 + '0';
		n /= 10;
	}
	if (sign > 0)
		str[i] == '-';
	return (str);
}
