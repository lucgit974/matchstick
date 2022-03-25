#include "my.h"

int verif_matches(matches_t *s, char *str)
{
    int count = 0;
    int o = 0;

    while (s->map[NBR][o]) {
        if (s->map[NBR][o] == '|')
            count++;
        o++;
    }
    return count;
}

int verif_ai(matches_t *s, int line)
{
    int count = 0;
    int o = 0;

    while (s->map[line][o]) {
        if (s->map[line][o] == '|')
            count++;
        o++;
    }
    return count;
}