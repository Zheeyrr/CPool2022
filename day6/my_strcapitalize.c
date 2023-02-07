/*
** EPITECH PROJECT, 2022
** B-CPE-100-STG-1-1-cpoolday06-yanis.resedente
** File description:
** my_strcapitalize
*/

char *my_strcapitalize(char *str)
{
    for (int tmp = 0; str[tmp] != '\0'; tmp++) {
        if (str[tmp] <= 'Z' && str[tmp] >= 'A')
            str[tmp] += 32;
    }
    for (int cap = 0; str[cap] != '\0'; cap++) {
        if (str[cap] <= 'z' && str[cap] >= 'a' &&
        str[cap - 1] >= 0 && str[cap - 1] <= '/')
            str[cap] -= 32;
    }
    return (str);
}
