/*
** EPITECH PROJECT, 2022
** B-CPE-100-STG-1-1-cpoolday05-yanis.resedente
** File description:
** my_compute_power_rec
*/

int my_compute_power_rec(int nb, int p)
{
    int tmp = 1;

    if (p == 0)
        return (1);
    if (p < 0)
        return (0);
    tmp = my_compute_power_rec(nb, p - 1) * nb;
    return (tmp);
}
