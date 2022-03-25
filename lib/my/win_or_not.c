#include "my.h"

int win_or_not(char **map)
{
    int count = 0;

    for (int i = 0; map[i]; i++) {
        for (int o = 0; map[i][o]; o++) {
            if (map[i][o] == '|')
                count++;
        }
    }
    return count;
}