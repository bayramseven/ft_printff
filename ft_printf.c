/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bayseven <bayseven@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 00:28:16 by bayram-seve       #+#    #+#             */
/*   Updated: 2026/04/23 11:36:14 by bayseven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	argm;
	int		i;
	int		total;

	if (!str)
		return (-1);
	i = 0;
	total = 0;
	va_start(argm, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			total += ft_check_format(argm, str[i + 1]);
			i += 2;
		}
		else
		{
			total += write(1, &str[i], 1);
			i++;
		}
	}
	va_end(argm);
	return (total);
}
