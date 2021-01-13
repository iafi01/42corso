/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liafigli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 10:46:20 by liafigli          #+#    #+#             */
/*   Updated: 2021/01/12 11:53:21 by liafigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		space(char *str, int i)
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

int		ft_atoi(const char *str)
{
	int i;
	int sign;
	int sum;

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
	return (sum * sign);
}
