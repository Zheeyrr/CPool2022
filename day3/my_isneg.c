/*
** EPITECH PROJECT, 2022
** B-CPE-100-STG-1-1-cpoolday03-yanis.resedente
** File description:
** my_isneg
*/

int my_isneg(int n)
{
    int ng = n;

    if (ng >= 0) {
        my_putchar(80);
    } else {
        my_putchar(78);
    }
    return (0);
}
