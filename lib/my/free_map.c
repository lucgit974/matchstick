#include "my.h"

char **free_map(char **map)
{
    for (int i = 0; map[i]; i++)
        free(map[i]);
    free(map);
    return map;
}