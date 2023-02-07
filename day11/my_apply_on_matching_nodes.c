/*
** EPITECH PROJECT, 2022
** B-CPE-100-STG-1-1-cpoolday11-yanis.resedente
** File description:
** my_apply_on_matching_nodes
*/

#include "include/mylist.h"

int my_apply_on_matching_nodes(linked_list_t *begin, int (*f)(),
                                void const *data_ref, int (*cmp)())
{
    linked_list_t *temp;

    temp = begin;
    while (temp != 0) {
        if ((*cmp)(temp->data, data_ref) == NULL) {
            (*f)(temp->data);
        }
        temp = temp->next;
    }
    return 0;
}
