/*
** EPITECH PROJECT, 2022
** B-CPE-100-STG-1-1-cpoolday06-yanis.resedente
** File description:
** my_strupcase
*/

char *my_strupcase(char *str)
{
    for (int a = 0; str[a] != '\0'; ++a) {
        if ('a' <= str[a] && str[a] <= 'z')
            str[a] = str[a] - 32;
    }
    return (str);
}
