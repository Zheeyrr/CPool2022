/*
** EPITECH PROJECT, 2022
** find node
** File description:
** return the address of each nds
*/

#include "include/mylist.h"

linked_list_t *my_find_node(linked_list_t const *begin, void const *data_ref,
                            int (*cmp)())
{
    linked_list_t *temp = begin;

    while (temp != 0) {
        if (cmp(data_ref, temp->data) == NULL)
            return temp;
        temp = temp->next;
    }
}
