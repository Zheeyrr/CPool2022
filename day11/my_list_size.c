/*
** EPITECH PROJECT, 2022
** B-CPE-100-STG-1-1-cpoolday11-yanis.resedente
** File description:
** my_list_size
*/

#include "include/mylist.h"

int my_list_size(linked_list_t const *begin)
{
    int a = 0;

    for (a = 0; begin != NULL; a++)
        begin = begin->next;
    return (a);
}
