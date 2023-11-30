/*
** EPITECH PROJECT, 2023
** my_str_to_int.c
** File description:
** my_putstr
*/

#include "../headerfiles.h"

int my_str_to_int(char str[])
{
    int number = 0;
    int n = my_strlen(str);

    for (int i = 0; i < n; i++) {
        number = number * 10 + (str[i] - 48);
    }
    return number;
}
