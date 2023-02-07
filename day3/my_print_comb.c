/*
** EPITECH PROJECT, 2022
** STRCOMB
** File description:
** combinaison of strings
*/

int my_print(int a, int b, int c)
{
    my_putchar(a + '0');
    my_putchar(b + '0');
    my_putchar(c + '0');
    if (a != 7 || b != 8 || c != 9) {
        my_putchar(',');
        my_putchar(' ');
    }
}

int my_print_comb(void)
{
    int a = 0;
    int b = 0;
    int c = 0;

    for (a = 0; a <= 7; a++) {
        for (b = a + 1; b <= 8; b++) {
            for (c = b + 1; c <= 9; c++) {
                    my_print(a, b, c);
                        }
            }
        }
    my_putchar('\n');
    return (0);
}
