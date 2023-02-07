/*
** EPITECH PROJECT, 2022
** B-CPE-100-STG-1-1-cpoolday08-yanis.resedente
** File description:
** my_strdup
*/

char *my_strdup(char const *src)
{
    char *dff;

    dff = malloc(sizeof(char) * (my_strlen(src) + 1));
    my_strcpy(dff, src);
    return (dff);
}
