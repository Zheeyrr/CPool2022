/*
** EPITECH PROJECT, 2022
** B-CPE-100-STG-1-1-cpoolday11-yanis.resedente
** File description:
** my_apply_on_nodes (give fc to nodss)
*/

#include "include/mylist.h"
#include <stdlib.h>

int my_apply_on_nodes(linked_list_t *begin, int (*f)(void *))
{
    linked_list_t *temp;

    temp = begin;
    while (temp != 0) {
        (*f)(temp->data);
        temp = temp->next;
    }
    return (0);
}
