/*
** EPITECH PROJECT, 2022
** B-CPE-100-STG-1-1-cpoolday05-yanis.resedente
** File description:
** my_is_prime
*/

int my_is_prime(int nb)
{
    int a = 2;

    if (nb <= 1)
        return (0);
    for (a; a < (nb / 2) + 1; a++) {
        if (nb % a == 0)
            return (0);
    }
    return (1);
}
