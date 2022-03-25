#include "my.h"

matches_t *print_line(int o, int i, int line, matches_t *s)
{
    if ((o == 0 || o == (s->col - 1)) || (i == 0 || i == (line + 1)))
        s->tab[i][o] = '*';
    else
        s->tab[i][o] = ' ';
    if ((o > 0 && o < (s->col - 1)) && (i > 0 && i < (line + 1))) {
        if (o >= s->bef && o <= s->af)
            s->tab[i][o] = '|';
    }
    return s;
}

matches_t *print_matches(matches_t *s, int i, int line, int o)
{
    s->tab[i][o] = '\0';
    if (i > 0 && i < (line + 1)) {
        s->af = s->af + 1;
        s->bef = s->bef - 1;
    }
    return s;
}

char **set_map(int line, matches_t *s)
{
    s->tab = malloc(sizeof(char *) * (line + 3));
    s->col = (line * 2  + 1);
    s->mid = (s->col / 2);
    int i = 0;
    int o = 0;
    s->af = s->mid;
    s->bef = s->mid;

    while (i < (line + 2)) {
        s->tab[i] = malloc(sizeof(char) * (s->col + 2));
        while (o < s->col) {
            s = print_line(o, i, line, s);
            o++;
        }
        s = print_matches(s, i, line, o);
        i++;
        o = 0;
    }
    s->tab[line + 2] = NULL;
    return s->tab;
}