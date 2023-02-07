/*
** EPITECH PROJECT, 2022
** B-CPE-100-STG-1-1-cpoolday09-yanis.resedente
** File description:
** my_params_to_array
*/

#include <my.h>
struct info_param *my_params_to_array(int ac, char **av)
{
    int a = 0;

    struct info_param *tmp;
    tmp = malloc(sizeof(struct info_param) * (ac + 1));

    for (a = 0; a < ac; a = a + 1) {
        struct info_param var;
        var->length = my_strlen(av[tmp]);
        var->str = av[tmp];
        var->copy = malloc(sizeof(char) * (var->length + 1));
        my_strcpy(var->copy, av[tmp]);
        var->word_array = my_str_to_word_array(av[tmp]);
        array[tmp] = var;
    }
    array[tmp]->str = 0;

    return (tmp);
}
