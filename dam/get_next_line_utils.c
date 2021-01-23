/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 10:36:53 by dmalori           #+#    #+#             */
/*   Updated: 2021/01/20 10:06:18 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t					ft_strlen(const char *s)
{
	const char			*p;

	p = s;
	while (*s)
		s++;
	return (s - p);
}

void					ft_clear(char *arr)
{
	int					i;

	i = 0;
	while (i < BUFFER_SIZE)
		arr[i++] = 0;
}

void					*ft_memset(void *s, int c, size_t n)
{
	unsigned char		*p;

	p = (unsigned char *)s;
	while (n--)
		*p++ = (unsigned char)c;
	return (s);
}

void					*ft_calloc(size_t nelem, size_t elsize)
{
	char				*p;

	if ((p = malloc(nelem * elsize)) == NULL)
		return (NULL);
	p = ft_memset(p, 0, nelem * elsize);
	return (p);
}

char					*ft_recalloc(char *line_old, ssize_t plus)
{
	char				*line_new;
	int					i;

	i = 0;
	if (!(line_new = ft_calloc(ft_strlen(line_old) + plus + 1, sizeof(char))))
		return (NULL);
	while (line_old[i])
	{
		line_new[i] = line_old[i];
		i++;
	}
	free(line_old);
	return (line_new);
}
