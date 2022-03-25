#include "my.h"

matches_t *turn_ai(matches_t *s, int l, int m)
{
    s->can_disp = true;
    my_printf("\nAI's turn...\n");
    my_printf(AI_MOVE, m, l);
    s->map = update_map(l, m, s->map);
    return s;
}

int match_ai(int m, int del)
{
    for (int o = 0; o <= del; o++) {
        m = random() % (del + 1);
        if (m < del)
            m = m + 1;
    }
    return m;
}

int line_ai(int l, int line)
{
    for (int i = 0; i <= line; i++) {
        l = random() % line;
        if (l < line)
            l = l + 1;
    }
    return l;
}

int set_ia(matches_t *s, int line, int del, char **map)
{
    int l = 1;
    int m = 1;
    l = line_ai(l, line);
    m = match_ai(m, del);
    if (verif_ai(s, l) < m || l == 0 || m == 0)
        set_ia(s, line, del, map);
    else {
        s = turn_ai(s, l, m);
        s->ai.is_p = 1;
    }
    return 0;
}