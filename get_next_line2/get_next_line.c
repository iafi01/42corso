/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liafigli <liafigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 18:13:11 by liafigli          #+#    #+#             */
/*   Updated: 2021/01/28 12:33:21 by liafigli         ###   ########.fr       */
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
    char buf[BUFFER_SIZE + 1];

    i = 0;
    count = 0;
    if (fd < 0 || !line || BUFFER_SIZE <= 0 || fd < 4096)
		return (-1);
	if (!(arr = malloc(sizeof(char) * (BUFFER_SIZE + 1))))
		return (-1);
    while (i < 1)
    {
        count = read(fd, buf, BUFFER_SIZE);
        if (count == 0)
        {
        /*if (arr)
            {
                free(arr);
                arr = NULL;
            }*/
        return (0);
        }
        if (count < 0)
            return (-1);
        if (count > 0)
        {
            buf[count] = '\0';
            arr = ft_strjoin(arr, buf);
            i = checknl(buf);
        }
    }
    if (i > 0)
    {
        *line = ft_substr(arr, 0, i);
        arr = ft_substr(arr, i + 1, ft_strlen(buf));
        return (1);
    }
    return (0);
}
void gnl(int fd)
{
    char *line = NULL;
    printf("gnl: %d\n", get_next_line(fd, &line));
    printf("line:%s\n", line);
}
int main()
{
    int fd = open("gnlTester/files/empty", O_RDWR);
    printf("%d", fd);
    gnl(1000);
    close(fd);
}