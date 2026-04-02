/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_fonk.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bayram-seven <bayram-seven@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 19:18:29 by bayram-seve       #+#    #+#             */
/*   Updated: 2026/04/02 14:13:20 by bayram-seve      ###   ########.fr       */
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

int	ft_print_nbr(int n)
{
	int	total;

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
		char s = n + '0';
		total += write(1, &s, 1);
	}
	return (total);
}

int	ft_print_unbr(unsigned int n)
{
	int	total;

	total = 0;
	
	if (n >= 10)
	{
		total += ft_print_unbr(n / 10);
		total += ft_print_unbr(n % 10);
	}
	else
	{
		char s = n + '0';
		total += write(1, &s, 1);
	}
	return (total);
}

int ft_print_hexnum( unsigned long long n, char type )
{
    int total;
    char *hexamap;
    total=0;
    if (type == 'x')
    {
		hexamap = "0123456789abcdef";
	}
     else if (type =='X')
	{ 
       hexamap = "0123456789ABCDEF";
    }

    if ( n >= 16)
	{
		total += ft_print_hexnum(n / 16,type);
		total += ft_print_hexnum(n % 16,type);
	}
    else
    {
        total += write(1, &hexamap[n],1);
    }
    return(total);
}   

int ft_print_ptr(unsigned long long ptr)
{
    int total;
    total=0;
    if (ptr == 0)
    {
		return (write(1, "(nil)", 5));
    }
    
    total +=write(1,"0x",2);
    total += ft_print_hexnum(ptr,'x');
    return(total);
}