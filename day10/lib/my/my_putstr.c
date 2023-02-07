/*
** EPITECH PROJECT, 2021
** my_putstr.c
** File description:
** put str
*/
int my_putstr(char const *str)
{
    int a = 0;
    while ( str[a] != '\0' ) {
        my_putchar(str[a]);
        a = a + 1;
    }
}
