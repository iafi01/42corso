/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liafigli <liafigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 18:13:11 by liafigli          #+#    #+#             */
/*   Updated: 2021/01/25 14:57:05 by liafigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
static int checknl(const char *buf)
{
    int i;

    i = 0;
    while (buf[i])
    {
        if (buf[i] == '\n')
        {
            return (i);
        }
        i++;
    }
    return (-1);
}

int get_next_line(int fd, char **line)
{
    int count;
    int i;
    static char *arr;
    static char buf[BUFFER_SIZE + 1];

    i = 0;
    arr = malloc(2 * sizeof(char *));
    *arr = '\0';
    if (BUFFER_SIZE <= 0 || fd < 0 || !line)
        return (-1);
    while (i < 1)
    {
        count = read(fd, buf, BUFFER_SIZE);
        buf[count] = '\0';
        if (count == 0)
            break;
        if (count > 0)
            arr = ft_strjoin(arr, buf);
        i = checknl(buf);
    }
    if (i > 0)
    {
            *line = ft_substr(arr, 0, i);
        
            arr = ft_substr(arr, i + 1, ft_strlen(buf) + 1);
            return (1);
    }
    return (0);
}

