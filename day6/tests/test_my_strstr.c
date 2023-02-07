/*
** EPITECH PROJECT, 2022
** B-CPE-100-STG-1-1-cpoolday06-yanis.resedente
** File description:
** test_my_strstr
*/

#include <criterion/criterion.h>

char *my_strstr(char *str, char *to_find);

Test (my_strstr, all_answer)
{
    char *srct = strdup("SalutEpitech");
    char *dest = my_strstr(srct, "SalutEpitech");
    cr_assert_str_eq(dest, "SalutEpitech");
}

Test (my_strstr, finish_ans)
{
    char *srct = strdup("SalutEpitech");
    char *dest = my_strstr(srct, "Epitech");
    cr_assert_str_eq(dest, "Epitech");
}
