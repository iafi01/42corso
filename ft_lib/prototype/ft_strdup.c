/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liafigli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 13:14:42 by liafigli          #+#    #+#             */
/*   Updated: 2021/01/15 16:58:19 by liafigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1, size_t n)
{
	char *s2;

	*s2 = malloc(strlen(src) + 1);
	if (s2 == NULL)
		return (NULL);
	strcpy(s2, s1);
	return (s2);
}
