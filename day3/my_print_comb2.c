/*
** EPITECH PROJECT, 2022
** B-CPE-100-STG-1-1-cpoolday03-yanis.resedente
** File description:
** my_print_comb2
*/

int my_print_comb2(void)
{
    int tmp2 = 0;
    for (int csc = 0; csc < 100; csc++) {
        for (int tmp2 = csc + 1; tmp2 < 100; tmp2++) {
            shownbr(csc);
            my_putchar(' ');
            shownbr(tmp2);
            if (csc != 98 || tmp2 != 99) {
                my_putchar(',');
                my_putchar(' ');
            }
        }
    }
}

int shownbr(int tmp)
{
    int first;
    int second;

    first = tmp / 10 + 48;
    second = tmp % 10 + 48;
    my_putchar(first);
    my_putchar(second);
    return 0;
}
