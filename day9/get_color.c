/*
** EPITECH PROJECT, 2022
** B-CPE-100-STG-1-1-cpoolday09-yanis.resedente
** File description:
** get_color
*/

/*I take the base color value that i shift it in the memory
to put green in it and it stores the 2*/

int get_color(unsigned char red, unsigned char green, unsigned char blue)
{
    int start_color;

    start_color = red;
    start_color = start_color << 8;
    start_color += green;
    start_color = start_color << 8;
    start_color += blue;
    return (start_color);
}
