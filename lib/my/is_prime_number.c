#include <stdio.h>

int is_prime_number(int nb)
{
    int stock_dv = 0;
    int res = nb;
    int tmp = res;

    if (nb == 0 || nb == 1 || nb < 0 || nb >= 2147483647)
        return (0);
    while (nb >= 1) {
        tmp = res;
        tmp = tmp % nb;
        if (tmp == 0)
            stock_dv++;
        nb--;
    }
    if (stock_dv > 2)
        return (0);
    else
        return (1);
}