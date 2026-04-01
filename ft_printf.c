/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bayram-seven <bayram-seven@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 00:28:16 by bayram-seve       #+#    #+#             */
/*   Updated: 2026/04/01 17:58:36 by bayram-seve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
    va_list argm;
    int i;
    int total;
    while (str[i])
    {
            write(1,&str[i],1);
            i++;
            total++;
    }

}




    
/*

ilk olarak printf 
    printf in akışı şu şekilde yamaya çalışacağım->
    argümanlarımı tutabilecek bir va_list değişkeni oluşturacağım.
    va_start diyerek 
    
    bir adet str değişkeni ve printf içindeki % 'nin sonrasındaki harfe gelene kadar olan yerleri kontrol etmek ve write yazdırmak için kullanacağım.
    !!her write yazdığında karakter yazdırdıkça değişken oluştur ve  1 ekle çünkü orijinal fonskiyonda toplam kaç karakter bastığını söylüyor!!
 
    burada str nin içinde % olması durumunu kontrol için while a koşul ekleyeceğim. % ye denk olduğu anda belirtmiş olduğum fonksiyona gidecek ve orada bir çıktı verecek.
    fonsksiyona grdiğinde str i+1 diyerek % nin bir sağındaki harfin yazılmamasını sağlayacağım.
    içeride yazdırmak istediğim aargümanı va_arg diyerek çağıracağım. 
    va_end diyerek belleğimi temizleyeceğim.


    
    tabii bu makroları kullanabilmek için gerekli olan kütüphaneyi .h dosyama ekleyeceğim.


*/