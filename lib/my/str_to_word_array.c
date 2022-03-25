#include <stdlib.h>

char **insert(char **tab, char *buff, char c)
{
    int i = 0;
    int j = 0;
    int k = 0;

    while (buff[i] != '\0') {
        if (buff[i] == c) {
            tab[k][j] = '\0';
            k++;
            j = 0;
            i++;
        }
        tab[k][j] = buff[i];
        j++;
        i++;
    }
    tab[k][j] = '\0';
    tab[k+1] = NULL;
    return (tab);
}

char **malloc_each_index(char **tab, char *buff, char c)
{
    int i = 0;
    int j = 0;
    int counter = 0;

    while (buff[i] != '\0') {
        if (buff[i] == c) {
            tab[j] = malloc(sizeof(char) * (counter + 1));
            j++;
            counter = 0;
        }
        i++;
        counter++;
    }
    tab[j] = malloc(sizeof(char) * (counter + 1));
    return (tab);
}

int malloc_entire_tab(char *buff, char c)
{
    int i = 0;
    int counter = 0;

    while (buff[i] != '\0') {
        if (buff[i] == c)
            counter++;
        i++;
    }
    counter++;
    return (counter);
}

char **str_to_word_array(char *buff, char c)
{
    char **tab = NULL;

    tab = malloc(sizeof(char *) * (malloc_entire_tab(buff, c) + 1));
    tab = malloc_each_index(tab, buff, c);
    tab = insert(tab, buff, c);
    return (tab);
}
