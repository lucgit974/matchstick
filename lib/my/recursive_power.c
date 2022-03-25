int recursive_power(int nb , int p)
{
    if (p == 0)
        return (1);
    if (p == 1)
        return (nb);
    if (p < 0)
        return (0);
    if (p != 0)
        nb *= recursive_power(nb, p - 1);
    return (nb);
}