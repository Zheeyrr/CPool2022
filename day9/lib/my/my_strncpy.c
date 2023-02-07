/*
** EPITECH PROJECT, 2021
** my_strncpy.c
** File description:
** copy string of n
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;
    while (i != n && src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
