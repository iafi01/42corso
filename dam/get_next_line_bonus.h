/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 10:35:27 by dmalori           #+#    #+#             */
/*   Updated: 2021/01/20 10:06:17 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# include <unistd.h>
# include <stdlib.h>
# define MAX_FILES 4096

int		get_next_line(int fd, char **line);
char	*ft_recalloc(char *line_old, ssize_t plus);
void	*ft_calloc(size_t nelem, size_t elsize);
void	*ft_memset(void *s, int c, size_t n);
void	ft_clear(char *arr);
size_t	ft_strlen(const char *s);
int		ft_read_static(char *arr, char **line, char *line_new, int size);
int		ft_return(int code, char *arr, char *line_new, char **line);

#endif
