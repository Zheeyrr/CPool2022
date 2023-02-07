/*
** EPITECH PROJECT, 2021
** my_compute_square_root.c
** File description:
** square
*/

int my_compute_power_rec(int nb, int p);

int my_compute_square_root(int nb)
{
    int a;
    int test;

    if (nb <= 0)
        return (0);
    for (a = 1; a <= nb; a++) {
        test = my_compute_power_rec(a, 2);
        if (test == nb)
            return (a);
    }
    return (0);
}
