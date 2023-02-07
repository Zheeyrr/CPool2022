/*
** EPITECH PROJECT, 2022
** B-CPE-100-STG-1-1-cpoolday06-yanis.resedente
** File description:
** test_my_strcapitalize
*/

#include <criterion/criterion.h>

char *my_strcapitalize(char *str);

Test (my_strcapitalize, answer_all)
{
    char la[] = "i love epitech !";
    my_strcapitalize(la);

    cr_assert_str_eq(la, "I Love Epitech !");
}

Test (my_strcapitalize, just_answer)
{
    char tmp[] = "SalutEpitech";
    my_strcapitalize(tmp);

    cr_assert_str_eq(tmp, "salutepitech");
}
