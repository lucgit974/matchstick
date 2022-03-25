#include "my.h"

char *reverse_string(char *str)
{
    int i = 0;
    int o;
    int to = my_strlen(str) - 1;

    while (i < to) {
        o = str[to];
        str[to] = str[i];
        str[i] = o;
        i++;
        to--;
    }
    return (str);
}
