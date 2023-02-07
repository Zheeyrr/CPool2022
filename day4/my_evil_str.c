/*
** EPITECH PROJECT, 2022
** B-CPE-100-STG-1-1-cpoolday04-yanis.resedente
** File description:
** my_evil_str
*/

#include <stdio.h>
#include <string.h>

void my_swapbis(char *a, char *b)
{
    char two = *a;
    *a = *b;
    *b = two;
}

int my_strlentwo(char const *str)
{
    int two = 0;

    while (str[two] != '\0')
        two = two + 1;
    return (two);
}

char *my_evil_str(char *str)
{
    int tmpstp = my_strlentwo(str);

    for (int vc = 0; vc < tmpstp / 2; vc++) {
        my_swapbis(&str[vc], &str[tmpstp - vc - 1]);
    }
    return str;
}
