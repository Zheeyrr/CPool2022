/*
** EPITECH PROJECT, 2022
** B-CPE-100-STG-1-1-cpoolday07-yanis.resedente
** File description:
** main
*/

void my_putchar(char c);
int my_putstr(char const *str);

int main(int argc, char **argv[])
{
    for (int a = argc - 1; a >= 0; a--) {
        my_putstr(argv[a]);
        my_putchar('\n');
    }

    return 0;
}