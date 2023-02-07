/*
** EPITECH PROJECT, 2022
** B-CPE-100-STG-1-1-cpoolday09-yanis.resedente
** File description:
** my_show_param_array
*/

#include <stdlib.h>
#include <my.h>

int my_show_param_array(struct info_param const *par)
{
    int tmpp = 0;

    for (; par[tmpp].str != NULL; tmpp = tmpp + 1) {
        my_putstr(par[tmpp].str);
        my_putchar('\n');
        my_put_nbr(par[tmpp].length);
        my_putchar('\n');
        my_show_word_array(par[tmpp].word_array);
    }
    return 0;
}
