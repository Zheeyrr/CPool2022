/*
** EPITECH PROJECT, 2022
** B-CPE-100-STG-1-1-cpoolday06-yanis.resedente
** File description:
** my_strstr
*/

#include <string.h>

int my_strncmp(char const *s1, char const *s2, int n);

int my_strlen(char const *str);

char *my_strstr(char *str, char *to_find)
{
    int tmp = 0;
    while (str[tmp] != '\0') {
    if (my_strncmp(&str[tmp], to_find, my_strlen(to_find)) == 0)
        return (&str[tmp]);
        tmp = tmp + 1;
    }
    return (NULL);
}
