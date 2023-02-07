/*
** EPITECH PROJECT, 2022
** B-CPE-100-STG-1-1-cpoolday06-yanis.resedente
** File description:
** my_strlowcase
*/

char *my_strlowcase(char *str)
{
    for (int a = 0; str[a] != '\0'; a++) {
        if (str[a] <= 'Z' && str[a] >= 'A')
            str[a] += 32;
    }
    return (str);
}
