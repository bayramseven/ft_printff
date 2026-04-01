/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_fonk.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bayram-seven <bayram-seven@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 19:18:29 by bayram-seve       #+#    #+#             */
/*   Updated: 2026/04/02 02:12:49 by bayram-seve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_char(int c)
{
	return (write(1, &c, 1));
}

int ft_print_str(char *str)
{
    int total;

    if (!str)
    {
        return (write(1, "(null)", 6));
    }
    total = 0;
    while (str[total])
    {
        total++;
    }
     return (write(1, str, total));
}

