/*
** EPITECH PROJECT, 2022
** B-CPE-100-STG-1-1-cpoolday06-yanis.resedente
** File description:
** test_my_strncmp
*/

#include <criterion/criterion.h>

int my_strncmp(char const *s1, char const *s2, int n);

Test (my_strncmp, same_answer)
{
    char s1[] = "SalutEpitech";
    char s2[] = "SalutEpitech";

    int a = my_strncmp(s1, s2, 10);
    cr_assert_eq(a, 0);
}

Test (my_strncmp, get_nothing)
{
    char s1[] = "";
    char s2[] = "";

    int a = my_strncmp(s1, s2, 5);
    cr_assert_eq(a, 0);
}
