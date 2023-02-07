/*
** EPITECH PROJECT, 2022
** B-CPE-100-STG-1-1-cpoolday11-yanis.resedente
** File description:
** my_rev_list
*/

#include "include/mylist.h"

void my_rev_list(linked_list_t **begin)
{
    linked_list_t *rev = 0;
    linked_list_t *var = *begin;
    linked_list_t *tmp = 0;

    while (var != NULL) {
        rev = var->next;
        var->next = tmp;
        tmp = var;
        var = rev;
    }
    *begin = tmp;
}
