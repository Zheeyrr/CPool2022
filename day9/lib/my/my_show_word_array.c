/*
** EPITECH PROJECT, 2022
** my
** File description:
** my_show_word_array
*/

#include <stdlib.h>

void my_putchar(char c);

void my_putstr(char *str);

int my_show_word_array(char *const *tab)
{
    for (int tmp = 0; tab[tmp] != NULL; tmp++) {
        my_putstr(tab[tmp]);
        my_putchar('\n');
    }
    return 0;
}
