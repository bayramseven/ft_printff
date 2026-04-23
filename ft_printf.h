/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bayseven <bayseven@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 22:24:31 by bayram-seve       #+#    #+#             */
/*   Updated: 2026/04/23 10:27:40 by bayseven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *str, ...);
int	ft_print_char(int chr);
int	ft_print_str(char *str);
int	ft_print_nbr(int n);
int	ft_print_unbr(unsigned int n);
int	ft_print_hexnum(unsigned long long n, char format);
int	ft_print_ptr(unsigned long long ptr);

int	ft_check_format(va_list argm, const char type);
#endif
