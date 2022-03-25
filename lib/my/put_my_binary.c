#include <unistd.h>
#include "my.h"

int negativ_or_null(long long int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
    }
    if (nb == 0)
        my_putchar('0');
    return (nb);
}

int put_my_binary(long long int nb)
{
    long long int i = 1;
    int n = 0;

    if (nb < 0 || nb == 0)
        nb = negativ_or_null(nb);
    while (i <= nb) {
        i = i * 2;
    }
    i = i / 2;
    while (i != 0) {
        my_putchar(nb / i + 48);
        nb = nb % i;
        i = i / 2;
        n++;
    }
    return (n);
}