/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_fonkhp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bayram-seven <bayram-seven@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 14:15:34 by bayram-seve       #+#    #+#             */
/*   Updated: 2026/04/02 14:45:36 by bayram-seve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
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
