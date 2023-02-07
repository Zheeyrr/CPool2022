/*
** EPITECH PROJECT, 2021
** my_getnbr.c
** File description:
** get number
*/
#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_getnbr(char const *str)
{
    int a = 0;
    int nb = 0;
    int neg = 1;
    while (str[a] == '-' || str[a] == '+') {
    if (str[a] == '-') {
            neg = neg * -1;
        }
        a++;
    }
    while (str[a] >= '0' && str[a] <= '9') {
        nb = nb * 10;
        nb = str[a] - 48 + nb;
        a++;
    }
    long long b = nb;
    if (b > 2147483647 || b < -2147483647) {
        return 0;
    } return nb * neg;
}
