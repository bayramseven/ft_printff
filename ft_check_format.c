/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bayram-seven <bayram-seven@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 18:42:19 by bayram-seve       #+#    #+#             */
/*   Updated: 2026/04/02 01:26:39 by bayram-seve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

ft_check_format(va_list argm, const char type )
{
    int total; 
    total=0;
    
    if(type=='c')
        total += ft_print_char(va_arg(argm,int)) ;
    else if (type =='s')
    {
       
    }
    
    
    
return(total);


}

//cspdiucxX% sırasında tek tek fonksiyonları çağıracağım