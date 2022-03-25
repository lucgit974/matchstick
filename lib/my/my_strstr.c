int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0')
        i++;
    return (i);
}

char *my_strstr(char *str, char const *to_find)
{
    int o = 0;
    int g = 0;
    int len = my_strlen(to_find);
    int i = 0;

    while (str[o] != '\0') {
        while (to_find[g] != '\0' && to_find[g] == str[o + g]){
            i++;
            g++;
        }
        if (i == len)
            return (&str[o]);
        i = 0;
        g = 0;
        o++;
    }
    return (str);
}