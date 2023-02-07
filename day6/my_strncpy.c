/*
** EPITECH PROJECT, 2022
** B-CPE-100-STG-1-1-cpoolday06-yanis.resedente
** File description:
** my_strncpy
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int a = 0;

    for (; a < n && src[a] != '\0'; a++)
        dest[a] = src[a];
    for (; a < n; a++)
        dest[a] = '\0';
    return (dest);
}
