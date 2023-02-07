/*
** EPITECH PROJECT, 2022
** B-CPE-100-STG-1-1-cpoolday05-yanis.resedente
** File description:
** my_find_prime_sup
*/

int my_is_prime(int nb);

int my_find_prime_sup(int nb)
{
    if (nb <= 2)
        return (2);
    if (my_is_prime(nb) == 1)
        return (nb);
    else {
        while (my_is_prime(nb) != 1)
            nb = nb + 1;
    }
    return (nb);
}
