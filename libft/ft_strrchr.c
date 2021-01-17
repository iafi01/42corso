/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liafigli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 08:52:24 by liafigli          #+#    #+#             */
/*   Updated: 2021/01/17 11:54:31 by liafigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(s);
	i = len - 1;
	while (s[i] && ((char *)s)[i] != (char)c)
		i--;
	if (((char *)s)[i] == (char)c)
		return (((char *)s) + i);
	return (0);
}
