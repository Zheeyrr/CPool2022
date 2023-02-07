/*
** EPITECH PROJECT, 2021
** my_putchar.c
** File description:
** put char
*/

void my_putchar(char c)
{
    write(1, &c, 1);
}
