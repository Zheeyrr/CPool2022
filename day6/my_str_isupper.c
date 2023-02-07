/*
** EPITECH PROJECT, 2022
** B-CPE-100-STG-1-1-cpoolday06-yanis.resedente
** File description:
** my_str_isupper
*/

int my_strlen(char const *str);

int my_str_isupper(char const *str)
{
    if (my_strlen(str) == 0)
        return (1);
    for (int tmp = 0; str[tmp] != '\0'; tmp++) {
        if (!(str[tmp] >= 'A' && str[tmp] <= 'Z'))
            return (0);
    }
    return (1);
}
