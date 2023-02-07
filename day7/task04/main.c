/*
** EPITECH PROJECT, 2022
** B-CPE-100-STG-1-1-cpoolday07-yanis.resedente
** File description:
** main
*/

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putstr(char const *str)
{
    int i = 0;

    for (; str[i] != '\0'; i++)
        my_putchar(str[i]);
}

int main(int argc, char **argv[])
{
    for (int a = 0; a < argc; a++) {
        my_putstr(argv[a]);
        my_putchar('\n');
    }

    return (0);
}
