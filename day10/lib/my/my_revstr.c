/*
** EPITECH PROJECT, 2021
** my_revtsr.c
** File description:
** reverse a string
*/

char *my_revstr(char *str)
{
    int a = 0;
    int b = my_strlen(str) - 1;
    while ( a < b ) {
        char temp = str[a];
        str[a] = str[b];
        str[b] = temp;
        a++;
        b--;
    }
    return str;
}
