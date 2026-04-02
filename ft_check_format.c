/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bayram-seven <bayram-seven@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 18:42:19 by bayram-seve       #+#    #+#             */
/*   Updated: 2026/04/02 14:12:39 by bayram-seve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

int ft_check_format(va_list argm, const char type )
{
    int total; 
    total=0;
    
    if(type=='c')
        total += ft_print_char(va_arg(argm,int)) ;
    else if (type =='s')
    {
       total+= ft_print_str(va_arg(argm, char *));
    }
    else if(type =='d' || type =='i' )
    {
        total += ft_print_nbr(va_arg(argm,int));
    }
    else if (type =='u')
    {
      total += ft_print_unbr(va_arg(argm,unsigned int));
    }
    else if (type == 'x'||type == 'X')
    {
        total +=ft_print_hexnum(va_arg(argm, unsigned int),type);
    }
    else if ( type =='p')
    {
        total += ft_print_ptr(va_arg( argm,unsigned long long));
    }
    else if (type=='%')
    {
        total+= write(1,"%",1);
    }    
 
return(total);
}

//cspdiucxX% sırasında tek tek fonksiyonları çağıracağım