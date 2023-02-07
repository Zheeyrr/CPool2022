/*
** EPITECH PROJECT, 2022
** B-CPE-100-STG-1-1-cpoolday06-yanis.resedente
** File description:
** my_strncmp
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int a = 0;

    if (n == 0)
        return (0);
    for (; (s1[a] == s2[a] && s1[a]
    != '\0' && s2[a] != '\0') && a < n - 1; a++);
    return (s1[a] - s2[a]);
}
