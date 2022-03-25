#include <unistd.h>
#include "my.h"

int my_put_nbr( long long int nb)
{
    long long int gp = 1;

    if (nb < 0) {
        my_putchar('-');
        nb *= -1;
    }
    while ((nb / gp) >= 10)
        gp *= 10;
    while (gp > 0) {
        my_putchar((nb / gp) % 10 + '0');
        gp /= 10;
    }
    return (0);
}
