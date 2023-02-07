/*
** EPITECH PROJECT, 2022
** B-CPE-100-STG-1-1-cpoolday06-yanis.resedente
** File description:
** my_str_islower
*/

int my_str_islower(char const *str)
{
    for (int tmp = 0; str[tmp] != '\0'; tmp++) {
        if (!(str[tmp] >= 'a' && str[tmp] <= 'z'))
            return (0);
    }
    return (1);
}
