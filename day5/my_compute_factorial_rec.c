/*
** EPITECH PROJECT, 2022
** B-CPE-100-STG-1-1-cpoolday05-yanis.resedente
** File description:
** my_compute_factorial_rec
*/

int my_compute_factorial_rec(int nb)
{
    if (nb < 0 || nb >= 13)
        return (0);
    else if (nb == 0)
        return (1);
    else
        return (nb * my_compute_factorial_rec(nb - 1));
}
