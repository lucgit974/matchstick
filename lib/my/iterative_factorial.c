#include <unistd.h>

int iterative_factorial(int nb)
{
    int res = 1;

    if (nb < 0 || nb >= 13)
        return (0);
    if (nb == 0)
        return (1);
    while (nb > 1) {
        res = nb * res;
        nb--;
    }
    return (res);
}