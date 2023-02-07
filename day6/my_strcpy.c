/*
** EPITECH PROJECT, 2022
** B-CPE-100-STG-1-1-cpoolday06-yanis.resedente
** File description:
** my_strcpy
*/

char *my_strcpy(char *dest, char const *src)
{
    int cp = 0;

    while (src[cp] != '\0') {
        dest[cp] = src[cp];
        cp = cp + 1;
    }
    dest[cp] = '\0';
    return dest;
}
