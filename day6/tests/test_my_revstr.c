/*
** EPITECH PROJECT, 2022
** B-CPE-100-STG-1-1-cpoolday06-yanis.resedente
** File description:
** test_my_revstr
*/

#include <criterion/criterion.h>

char *my_revstr(char *str);

Test (my_revstr, rev_odd_string)
{
    char src[] = "Hello";
    my_revstr(src);
    cr_assert_str_eq(src, "olleH");
}
