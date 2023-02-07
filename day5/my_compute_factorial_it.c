/*
** EPITECH PROJECT, 2022
** B-CPE-100-STG-1-1-cpoolday05-yanis.resedente
** File description:
** my_compute_factorial_it
*/

int my_compute_factorial_it(int nb)
{
    int rslt = nb;

    if (nb == 0)
        return (1);
    if (nb < 0)
        return (0);
    if (nb > 12)
        return (0);
    while (nb > 1) {
        rslt = rslt * (nb - 1);
        nb = nb - 1;
    }
    if (rslt < 0)
        return (0);

    return (rslt);
}
