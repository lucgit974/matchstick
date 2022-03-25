#include "my.h"

int error_line(char *str, int nb)
{
    for (int i = 0; str[i]; i++) {
        if (is_alpha(str[i]) == 1) {
            my_printf(INVALID_IMPUT);
            return 1;
        }
        if (NBR <= 0 || NBR > nb) {
            my_printf(OUT_RANGE);
            return 2;
        }
        if (NBR > nb) {
            my_printf(OUT_RANGE);
            return 3;
        }
    }
    return 0;
}