*This project has been created as part of the 42 curriculum by bayseven.*

## Description

Bu proje, 42 okulunun `ft_printf` ödevine göre kendi basit `printf` fonksiyonumu yazmak için hazırlandı. Amaç, standart kütüphanedeki `printf` fonksiyonunun bazı temel formatlama özelliklerini kendi kodumla yeniden uygulayabilmek.

Projede desteklenen formatlar:
- `%c` : karakter
- `%s` : string
- `%d` ve `%i` : işaretli tam sayı
- `%u` : işaretsiz tam sayı
- `%x` ve `%X` : 16'lık tabanda küçük/büyük harfli sayı
- `%p` : gösterici (pointer)
- `%%` : % işaretini yazdırma

## Instructions

1. Terminalde proje klasörüne girin.
2. `make` komutunu çalıştırın.
3. Oluşan `libftprintf.a` kütüphanesini kendi test programlarınızda kullanabilirsiniz.

Örnek:

```bash
make
cc -Wall -Wextra -Werror main.c libftprintf.a -o test_printf
./test_printf
```

Eğer sadece kütüphane derlemek isterseniz:

```bash
make
```

Temizlik için:

```bash
make fclean
```

## Algorithm & Data Structure

Bu projede karmaşık bir veri yapısı kullanılmadı; genel olarak basit fonksiyon çağrıları ve yazma işlemleriyle ilerledim.

- `ft_printf` fonksiyonu gelen format string üzerinde tek tek geziyor.
- `%` karakteri gördüğünde bir sonraki karakteri kontrol ediyor ve uygun yazdırma fonksiyonuna yönlendiriyor.
- Argümanları tutmak için `va_list`, `va_start`, `va_arg` ve `va_end` kullanılıyor.
- String ve sayı yazdırma işini kendi yardımcı fonksiyonlarım yapıyor.
- Sayı yazdırma için özyinelemeli (recursive) yöntem kullanıldı; önce en yüksek basamaktan başlayarak her basamağı yazdırıyor.

Bu sayede kodun ana akışı basit kalıyor ve her format türü için ayrı bir fonksiyon sorumluluk alıyor.

## Resources

- `man 3 printf`
- `stdarg.h` dokümantasyonu
- 42 okulundaki `ft_printf` proje açıklamaları
- https://www.geeksforgeeks.org/c/printf-in-c/
- https://www.w3schools.com/c/ref_stdio_printf.php 
- https://linux.die.net/man/3/printf
- https://www.youtube.com/watch?v=4jXXp_rn8ik 
- https://www.tutorialspoint.com/c_standard_library/stdarg_h.htm 
- https://www.geeksforgeeks.org/c/variadic-functions-in-c/
- https://hackernoon.com what-is-va_list-in-c-exploring-the-secrets-of-ft_printf
- https://www.w3schools.com/c/c_data_types_extended.php


AI kullanımı:
- README dosyasının yapısını ve içerik düzenini oluşturmak için AI destekli bir asistan kullanıldı.
- Kod yazımı ve proje fonksiyonları doğrudan kendi çalışmamdır.

