#include "my.h"

char **update_map(int line , int nb_matches, char **map)
{
    int i = 0;

    for (int o = (my_strlen(map[line])); (i != nb_matches) && (o != 0); o--) {
        if (map[line][o] == '|') {
            map[line][o] = ' ';
            i++;
        }
    }
    return map;
}