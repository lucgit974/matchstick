#include "my.h"

char *duplicate_string(char *src)
{
    int i = 0;
    char *dup = malloc(sizeof(char) * my_strlen(src));

    while (src[i] != '\0') {
        dup[i] = src[i];
        i++;
    }
    return (dup);
}