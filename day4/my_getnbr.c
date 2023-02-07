/*
** EPITECH PROJECT, 2022
** B-CPE-100-STG-1-1-cpoolday04-yanis.resedente
** File description:
** my_getnbr
*/

int my_get_nbr(char const *str)
{
    int tmp = 0;
    int nbr = 0;
    while (str[tmp] != '\0') {
        while (str[tmp] >= '0' && str[tmp] <= '9') {
            nbr = nbr * 10;
            nbr = nbr + str[tmp] - 48;
            tmp = tmp + 1;
        }
    }
    return nbr;
}
