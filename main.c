#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

void	compare(int m, int r)
{
	if (m == r)
		printf("   ✅ [Dönüş Değeri Eşit: %d]\n\n", m);
	else
		printf("   ❌ [HATA! Kendi: %d | Gerçek: %d]\n\n", m, r);
}

int	main(void)
{
	int m;
	int r;
	char *s_null = NULL;

	printf("--- [TEST 1: Karakter & Yüzde] ---\n");
	m = ft_printf("K: |%c| |%%|\n", '0');
	r =    printf("G: |%c| |%%|\n", '0');
	compare(m, r);

	printf("--- [TEST 2: String & NULL] ---\n");
	m = ft_printf("K: |%s| |%s|\n", "42 Istanbul", s_null);
	r =    printf("G: |%s| |%s|\n", "42 Istanbul", s_null);
	compare(m, r);

	printf("--- [TEST 3: Tamsayı Sınırları] ---\n");
	m = ft_printf("K: |%d| |%i| |%d|\n", INT_MIN, INT_MAX, 0);
	r =    printf("G: |%d| |%i| |%d|\n", INT_MIN, INT_MAX, 0);
	compare(m, r);

	printf("--- [TEST 4: Unsigned & Hex] ---\n");
	m = ft_printf("K: |%u| |%x| |%X|\n", UINT_MAX, 255, 255);
	r =    printf("G: |%u| |%x| |%X|\n", UINT_MAX, 255, 255);
	compare(m, r);

	printf("--- [TEST 5: Pointer Adresi] ---\n");
	void *ptr = &m;
	m = ft_printf("K: |%p| |%p|\n", ptr, NULL);
	r =    printf("G: |%p| |%p|\n", ptr, NULL);
	compare(m, r);

	printf("--- [TEST 6: Uzun Metin Karışık] ---\n");
	m = ft_printf("K: %s %d %% %x %c\n", "Bitti", 42, 3735928559, '!');
	r =    printf("G: %s %d %% %x %c\n", "Bitti", 42, 3735928559, '!');
	compare(m, r);

	return (0);
}