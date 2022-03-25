#include "my.h"

int lines(matches_t *s, int can_del, int nb)
{
    size_t size;

    my_printf("Line: ");
    if (getline(&s->lines, &size, stdin) == EOF)
        return 1;
    s->ret_line = error_line(s->lines, nb);
    if (s->ret_line >= 1 && s->ret_line <= 3)
        return (get_line(s, can_del, s->map, nb));
    my_printf("Matches: ");
    if (getline(&s->matches, &size, stdin) == EOF)
        return 1;
    s->ret_match =  error_matche(s, s->lines, my_getnbr(s->matches), can_del);
    if (s->ret_match >= 1 && s->ret_match <= 4)
        return (get_line(s, can_del, s->map, nb));
    return 0;
}