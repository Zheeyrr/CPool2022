/*
** EPITECH PROJECT, 2022
** B-CPE-100-STG-1-1-cpoolday06-yanis.resedente
** File description:
** my_revstr
*/

int my_strlen(char const *str)
{
    int a = 0;
    while (str[a] != '\0') {
        a++;

    } return (a);
}

char *my_revstr(char *str)
{
    int tmp = 0;
    int endt = my_strlen(str) - 1;
    int abc = (endt + 1) / 2;

    while (tmp != abc) {
        char temp = str[tmp];
        str[tmp] = str[endt];
        str[endt] = temp;
        endt = endt - 1;
        tmp = tmp + 1;
    }
    return (str);
}
