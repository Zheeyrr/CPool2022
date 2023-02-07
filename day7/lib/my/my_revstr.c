/*
** EPITECH PROJECT, 2021
** my_revtsr.c
** File description:
** reverse a string
*/

int my_strlen(char const *str)
{
    int a = 0;
    while (str[a] != '\0') {
        a = a + 1;
    } return a;
}

char *my_revstr(char *str)
{
    int a = 0;
    int b = my_strlen(str) - 1;
    while (a < b) {
        char temp = str[a];
        str[a] = str[b];
        str[b] = temp;
        a++;
        b--;
    }
    return str;
}
