#include "my.h"

int check(matches_t *s, char **map)
{
    if (win_or_not(map) == 0) {
        if (s->ai.is_p == 1) {
            my_printf(WIN_IA);
            return 1;
        }
        if (s->ai.is_p == 2) {
            my_printf(WIN_P);
            return 1;
        }
    }
    return 0;
}