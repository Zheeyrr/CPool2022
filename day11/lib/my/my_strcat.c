/*
** EPITECH PROJECT, 2021
** my_strcat
** File description:
** concatenate strings
*/

char my_strcat(char *dest, char const *src)
{
    int a = 0;
    int b = my_strlen(dest);

    while (src[a] != '\0') {
        dest[b + a] = src[a];
        a = a + 1;
    }
    return (dest);
}
