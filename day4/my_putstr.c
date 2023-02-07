/*
** EPITECH PROJECT, 2022
** B-CPE-100-STG-1-1-cpoolday04-yanis.resedente
** File description:
** my_putstr
*/

int my_putstr(char const *str)
{
    int stri = 0;

    while (str[stri] != '\0') {
        my_putchar(str[stri]);
        stri = stri + 1;
    }
    return 0;
}
