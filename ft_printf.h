/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bayram-seven <bayram-seven@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 22:24:31 by bayram-seve       #+#    #+#             */
/*   Updated: 2026/04/02 04:53:52 by bayram-seve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H


# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *str, ...);
int	ft_print_char(int chr);
int ft_print_str(char *str);
int ft_print_nbr(int n);
int ft_print_unbr(unsigned int n);
int ft_print_hexnum( unsigned int n, char format );


int ft_check_format(va_list argm, const char type );
#endif
