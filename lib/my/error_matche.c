#include "my.h"

int error_matche(matches_t *s, char *str, int del, int can_del)
{
    for (int i = 0; s->matches[i]; i++) {
        if (is_alpha(s->matches[i]) == 1) {
            my_printf(INVALID_IMPUT);
            return 1;
        }
        if (my_getnbr(s->matches) > can_del) {
            my_printf(ERROR_MATCHES, can_del);
            return 2;
        }
        if (my_getnbr(s->matches) == 0) {
            my_printf(MOVE_0_MATCHES);
            return 3;
        }
        if (verif_matches(s, str) < del) {
            my_printf(CANNOT_RM);
            return 4;
        }
    }
    return 0;
}