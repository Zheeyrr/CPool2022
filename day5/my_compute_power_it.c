/*
** EPITECH PROJECT, 2022
** B-CPE-100-STG-1-1-cpoolday05-yanis.resedente
** File description:
** my_compute_power_it
*/

int my_compute_power_it(int nb, int p)
{
    int w = nb;

    if (p == 0)
        return (1);
    if (p < 0)
        return (0);
    for (; p != 1; --p) {
        w = w * nb;
    }
    return (w);
}
