#ifndef STRUCT_H_
#define STRUCT_H_
#include "my.h"
#include <stdbool.h>

typedef struct ai_s {
    int retn;
    int is_ai;
    int is_p;
}ai_t;

typedef struct matches_s {
    ai_t ai;
    int mts;
    int win;
    bool can_disp;
    int l_ia;
    int ret_line;
    int ret_match;
    int m_ia;
    bool can_rm;
    int line;
    int col;
    int mid;
    int bef;
    int af;
    char **map;
    char **tab;
    char *lines;
    char * matches;
}matches_t;

#endif /* !STRUCT_H_ */