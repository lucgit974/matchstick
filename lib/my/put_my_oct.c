#include <unistd.h>
#include "my.h"

int put_my_oct(long long int nb)
{
    long long int gp = 1;

    if (nb < 0) {
        my_putchar('-');
        nb *= -1;
    }
    while ((nb / gp) >= 10)
        gp *= 8;
    while (gp > 0) {
        my_putchar((nb / gp) % 8 + '0');
        gp /= 8;
    }
    return (0);
}