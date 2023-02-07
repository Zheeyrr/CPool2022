/*
** EPITECH PROJECT, 2022
** B-CPE-100-STG-1-1-cpoolday11-yanis.resedente
** File description:
** my_params_to_list
*/

#include "include/mylist.h"

linked_list_t *second_list(void *data, linked_list_t *list)
{
    linked_list_t *tmp;

    tmp = malloc(sizeof(linked_list_t));
    tmp->data = data;
    tmp->next = list;
    return (tmp);
}

linked_list_t *my_params_to_list(int ac, char *const *av)
{
    linked_list_t *list;
    int a = 0;

    list = 0;
    for (; a < ac; a = a + 1) {
        list = second_list(av[a], list);
    }
    return (list);
}
