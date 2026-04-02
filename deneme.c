#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
    int benimki;
    int asilolan;

    
    benimki = ft_printf("Kendi : %c %s %%\n", 'A', "Bayram");
    asilolan =    printf("Gercek: %c %s %%\n", 'A', "Bayram");
    printf("Return-> Kendi: %d | Gercek: %d\n\n", benimki, asilolan);

   
    benimki = ft_printf("Kendi : %d %i %u\n", INT_MIN, -42, UINT_MAX);
    asilolan =    printf("Gercek: %d %i %u\n", INT_MIN, -42, UINT_MAX);
    printf("Return-> Kendi: %d | Gercek: %d\n\n", benimki, asilolan);

    benimki = ft_printf("Kendi : %x %X %p\n", 255, 255, &benimki);
    asilolan =    printf("Gercek: %x %X %p\n", 255, 255, &benimki);
    printf("Return-> Kendi: %d | Gercek: %d\n\n", benimki, asilolan);

    return (0);
}