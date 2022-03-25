#include "my.h"

int is_alpha(char c)
{
    return ((c < '0' || c > '9') && c != '\n');
}