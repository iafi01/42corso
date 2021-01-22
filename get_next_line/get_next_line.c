/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liafigli <liafigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 18:13:11 by liafigli          #+#    #+#             */
/*   Updated: 2021/01/22 17:56:50 by liafigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int checknl(char *buf)
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
    char *buf[BUFFER_SIZE + 1];
    if (BUFFER_SIZE <= 0 || fd < 0 || !line)
        return (-1);
    count = read(fd, buf, BUFFER_SIZE);
    ft_substr(buf, );
    i = checknl(buf);
    arr = ft_strjoin(arr, buf);
}