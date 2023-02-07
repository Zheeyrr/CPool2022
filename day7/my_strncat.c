/*
** EPITECH PROJECT, 2022
** B-CPE-100-STG-1-1-cpoolday07-yanis.resedente
** File description:
** my_strncat
*/

char *my_strncat(char *dest, char const *src, int nb)
{
    int a = 0;
    int b = my_strlen(dest);

    while (a < nb && src[a != '\0']) {
        dest[b + a] = src[a];
        a++;
    }
    return (dest);
}
