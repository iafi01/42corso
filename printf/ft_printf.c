/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liafigli <liafigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 13:43:00 by liafigli          #+#    #+#             */
/*   Updated: 2021/01/24 17:00:26 by liafigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

int ft_printf(const char *fix, ...)
{
    va_list ap;

    va_start(ap, fix);
    while (*fix)
    {
        if (*fix == '%')
            
    }
    va_end(ap);
}
