/*
** EPITECH PROJECT, 2022
** B-CPE-100-STG-1-1-cpoolday06-yanis.resedente
** File description:
** my_str_isalpha
*/

#include <stdio.h>

int my_strlen(char const *str);

int my_str_isalpha(char const *str)
{
    int tmp = 0;
    int alp = 0;

    if (my_strlen(str) == 0)
        return (1);
    for (int s = 0; str[s] != '\0'; s++) {
        if (!(str[s] >= 'a' && str[s] <= 'z'))
            tmp = 1;
        if (!(str[s] >= 'A' && str[s] >= 'Z'))
            alp = 1;
    }
    if (tmp + alp == 0)
        return (1);
    return (0);
}
