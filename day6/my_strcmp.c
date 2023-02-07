/*
** EPITECH PROJECT, 2022
** B-CPE-100-STG-1-1-cpoolday06-yanis.resedente
** File description:
** my_strcmp
*/

int my_strcmp(char const *s1, char const *s2)
{
    int i;

    for (i = 0; s1[i] == s2[i] && s1[i]
    != '\0' && s2[i] != '\0'; i++);
    return (s1[i] - s2[i]);
}
