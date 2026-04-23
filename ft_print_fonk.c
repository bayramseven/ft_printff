/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_fonk.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bayseven <bayseven@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 19:18:29 by bayram-seve       #+#    #+#             */
/*   Updated: 2026/04/23 12:05:30 by bayseven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_char(int c)
{
	return (write(1, &c, 1));
}

int	ft_print_str(char *str)
{
	int	total;

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

int	ft_print_nbr(int n)
{
	int		total;
	char	s;

	total = 0;
	if (n == -2147483648)
	{
		return (write(1, "-2147483648", 11));
	}
	if (n < 0)
	{
		total += write(1, "-", 1);
		n = -n;
	}
	if (n >= 10)
	{
		total += ft_print_nbr(n / 10);
		total += ft_print_nbr(n % 10);
	}
	else
	{
		s = n + '0';
		total += write(1, &s, 1);
	}
	return (total);
}

int	ft_print_unbr(unsigned int n)
{
	int		total;
	char	s;

	total = 0;
	if (n >= 10)
	{
		total += ft_print_unbr(n / 10);
		total += ft_print_unbr(n % 10);
	}
	else
	{
		s = n + '0';
		total += write(1, &s, 1);
	}
	return (total);
}
