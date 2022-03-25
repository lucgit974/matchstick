#include "my.h"

int get_line(matches_t *s, int can_del, char **map, int nb)
{
    s->lines = NULL;
    s->matches = NULL;
    (void)map;

    if (lines(s, can_del, nb) == 1)
        return 1;
    return 0;
}

int matchstick(matches_t *s, int nb, int del)
{
    s->map = set_map(nb, s);
    show_array(s->map);
    while (1) {
        my_printf("\nYour turn:\n");
        if (get_line(s, del, s->map, nb) == 1)
            return 0;
        my_printf(PLAYER_MOVE, MATCH, LINE);
        if ((s->map = update_map(LINE, MATCH, s->map)))
            s->ai.is_p = 2;
        show_array(s->map);
        if (check(s, s->map) == 1)
            return s->ai.is_p;
        set_ia(s, nb, del, s->map);
        show_array(s->map);
        if (check(s, s->map) == 1)
            return s->ai.is_p;
    }
    s->map = free_map(s->map);
    return 0;
}

int main(int ac, char **av)
{
    matches_t *s = malloc(sizeof(matches_t));
    int ret = 0;
    if (ac != 3) {
        my_printf(ERROR);
        return 84;
    }
    ret = matchstick(s, my_getnbr(av[1]), my_getnbr(av[2]));
    free(s);
    return ret;
}