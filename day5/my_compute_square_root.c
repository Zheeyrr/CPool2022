/*
** EPITECH PROJECT, 2022
** B-CPE-100-STG-1-1-cpoolday05-yanis.resedente
** File description:
** my_compute_square_root
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
