/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liafigli <liafigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 18:13:11 by liafigli          #+#    #+#             */
/*   Updated: 2021/01/23 13:50:19 by liafigli         ###   ########.fr       */
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

static int countnl(const char *buf)
{
    int i;
    int n;

    i = 0;
    n = 0;
    while (buf[i])
    {
        if (buf[i] == '\n')
            n++;
        i++;
    }
    return (n);
}

int get_next_line(int fd, char **line)
{
    int count;
    int i;
    int c;
    static int start;
    static char *arr;
    char *buf[BUFFER_SIZE + 1];

    start = 0;
    if (BUFFER_SIZE <= 0 || fd < 0 || !line)
        return (-1);
    count = read(fd, *buf, BUFFER_SIZE);
    if (count > 0)
        arr = ft_strjoin(arr, *buf);
    i = checknl(*buf);
    if (i > 0)
    {
        c = countnl(*buf);
        while (c)
        {
            i = checknl(*buf);
            *line++ = ft_substr(*buf, start, i);
            *buf = *line;
            start = i;
            c--;
        }
    }
    return (0);
}

int main() {
    char **line;
    line = NULL;
    int fd = 1;
    printf("%d",get_next_line(fd, line));
    return 0;
}