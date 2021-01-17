/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liafigli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 10:46:20 by liafigli          #+#    #+#             */
/*   Updated: 2021/01/17 17:23:24 by liafigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		space(char const *str, int i)
{
	while (str[i])
	{
		if (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' ||
				str[i] == '\f' || str[i] == '\r' || str[i] == 32)
			i++;
		else
			break ;
	}
	return (i);
}

static int	checkmax(long n, int sign)
{
	if (n > 2147483647 && sign == 1)
		return (-1);
	if (n > 2147483648 && sign == -1)
		return (0);
	return (1);
}

int		ft_atoi(const char *str)
{
	int i;
	int sign;
	long sum;

	sum = 0;
	sign = 1;
	i = 0;
	i = space(str, i);
	if (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			sign *= -1;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			sum *= 10;
			sum += str[i] - '0';
			i++;
		}
		else
			break ;
	}
	if (checkmax(sum, sign) != 1)
		return (checkmax(sum, sign));
	return (sum * sign);
}
