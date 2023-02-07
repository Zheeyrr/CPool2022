/*
** EPITECH PROJECT, 2022
** my
** File description:
** my_str_to_word_array
*/

#include <stdlib.h>

int question_num(char a)
{
    if ((a >= '0' && a <= '9')
    || (a >= 'a' && a <= 'z')
    || (a >= 'A' && a <= 'Z'))
        return 0;
    return 1;
}

int show_word(char const *str)
{
    int tmp = 0;
    int a = 0;

    while (str[a] != '\0') {
        if (question_num(str[a]) == 0 && question_num(str[a + 1]) == 1)
            tmp = tmp + 1;
        a = a + 1;
    }
    return (tmp);
}

char *my_strncpy(char *dest, char const *src, int n)
{
    int temp = 0;

    for (; temp < n && src[temp] != '\0'; temp++)
        dest[temp] = src[temp];
    for (; temp < n; temp++)
        dest[temp] = '\0';
    return dest;
}

char **my_str_to_word_array(char const *str)
{
    int len = 0;
    int i;
    int j = 0;
    char **array = malloc(sizeof(char *) * (show_word(str) + 1));

    if (array == NULL)
        return (NULL);
    for (i = 0; str != NULL && str[i] != '\0'; i++) {
        if (question_num(str[i]) == 0)
            len = len + 1;
        if (question_num(str[i]) == 0 && question_num(str[i + 1]) == 1) {
            array[j] = malloc(sizeof(char) * (len + 1));
            my_strncpy(array[j], &str[i - len + 1], len);
            len = 0;
            j = j + 1;
        }
    }
    array[j] = NULL;
    return (array);
}
