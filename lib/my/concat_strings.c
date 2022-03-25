char *concat_strings(char *dest, char const *src)
{
    int d = 0;
    int s = 0;

    while (dest[d] != '\0')
        d++;
    while (src[s] != '\0') {
        dest[d] = src[s];
        s++;
        d++;
    }
    dest[d] = '\0';
    return (dest);
}