/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liafigli <liafigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 18:13:11 by liafigli          #+#    #+#             */
/*   Updated: 2021/01/23 10:43:41 by liafigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

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
    count = read(fd, buf, BUFFER_SIZE);
    if (count == 1)
        arr = ft_strjoin(arr, buf);
    if (i == checknl(buf) > 0)
    {
        while (c == countnl(buf))
        {
            i = checknl(buf);
            *line = ft_substr(arr, start, i);
            start = i;
            *line++;
            c--;
        }
    }
}

int main() {
  char **line;
  get_next_line(1, line);
  return 0;
}