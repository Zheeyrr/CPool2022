/*
** EPITECH PROJECT, 2022
** B-CPE-100-STG-1-1-cpoolday08-yanis.resedente
** File description:
** concat_params
*/

char *concat_params(int argc, char **argv)
{
    int tmp = 0;
    int test = 0;
    char *lafin;

    for (; test < argc; test++)
        tmp += my_strlen(argv[test]) + 1;
    lafin = malloc(sizeof(char) * (tmp + 10));
    for (test = 0; test < argc; test++) {
        lafin = my_strcat(lafin, argv[test]);
        lafin = my_strcat(lafin, "\n");
    } return (lafin);
}
