/*
** EPITECH PROJECT, 2022
** B-CPE-100-STG-1-1-cpoolday06-yanis.resedente
** File description:
** test_my_revstr
*/

#include <criterion/criterion.h>

char *my_strncpy(char *dest, char const *src, int n);

Test (my_strncpy, copy_five_characters_in_empty_array)
{
    char dest[6] = {0};

    my_strncpy(dest, "HelloWorld", 5);
    cr_assert_str_eq(dest, "Hello");
}

Test (my_strncpy, copy_four_characters_in_empty_array)
{
    char dest[5] = {0};

    my_strncpy(dest, "HelloWorld", 4);
    cr_assert_str_eq(dest, "Hell");
}
