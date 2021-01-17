/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liafigli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 17:23:45 by liafigli          #+#    #+#             */
/*   Updated: 2021/01/17 17:53:50 by liafigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!s || !(str = (char *)malloc((len + 1) * sizeof(char *))))
			return (0);
	i = start;
	j = 0;
	while (i < ft_strlen(s) && i < len)
			str[j++] = s[i++];
	str[j] = '\0';
	return (str);
}
