#ifndef MY_H_
#define MY_H_
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "struct.h"
#include <time.h>

void my_putchar(char c);
int put_my_oct(long long int nb);
int my_put_nbr(long long int nb);
int put_my_binary(long long int nb);
int my_putstr(char const *str);
int my_printf(const char *format, ...);
int my_strncmp(char const *s1, char const *s2, int n);
int my_getnbr(char const *str);
char **free_map(char **map);
int my_strlen(char *str);
void show_array(char **array);
char **free_map(char **map);
char **update_map(int line , int nb_matches, char **map);
char **set_map(int line, matches_t *s);
char *reverse_string(char *str);
int is_prime_number(int nb);
int iterative_factorial(int nb);
char *my_strcpy(char *dest, char const *src);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strstr(char *str, char const *to_find);
char *my_strupcase(char *str);
int recursive_power(int nb , int p);
char *concat_strings(char *dest, char const *src);
char *duplicate_string(char *src);
char **str_to_word_array(char *buff, char c);
int is_alpha(char c);
int error_line(char *str, int nb);
int error_matche(matches_t *s, char *str, int del, int can_del);
int verif_matches(matches_t *s, char *str);
int win_or_not(char **map);
int check(matches_t *s, char **map);
int is_win(char **map);
int lines(matches_t *s, int can_del, int nb);
int get_line(matches_t *s, int can_del, char **map, int nb);
int set_ia(matches_t *s, int line, int del, char **map);
int verif_ai(matches_t *s, int line);
char **ai(matches_t *s, int nb, int del);
int who_win(matches_t *s, char **map);

#define LINE      my_getnbr(s->lines)
#define MATCH      my_getnbr(s->matches)
#define NBR       my_getnbr(str)
#define ERROR_MATCHES "Error: you cannot remove more than %d matches per turn\n"
#define INVALID_IMPUT "Error: invalid input (positive number expected)\n"
#define OUT_RANGE     "Error: this line is out of range\n"
#define PLAYER_MOVE   "Player removed %d match(es) from line %d\n"
#define AI_MOVE       "AI removed %d match(es) from line %d\n"
#define MOVE_0_MATCHES "Error: you have to remove at least one match\n"
#define CANNOT_RM     "Error: not enough matches on this line\n"
#define WIN_P         "You lost, too bad\n"
#define WIN_IA        "I lost... snif... but I'll get you next time!!\n"
#define ERROR         "Error: need two arguments\n"

#endif
