#include "my.h"

void show_array(char **array)
{
    for (int i = 0; array[i] != NULL; i++)
        my_printf("%s\n", array[i]);
}
