/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liafigli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 16:27:34 by liafigli          #+#    #+#             */
/*   Updated: 2021/01/12 15:46:35 by liafigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		strlcat(char * restrict dst, const char * restrict src, 
		size_t dstsize)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j  = ft_strlen(dst);
	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	while (src[i] && j < dstsize - 1)
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	dst[j] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[i]));
}
