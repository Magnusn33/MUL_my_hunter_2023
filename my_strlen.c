/*
** EPITECH PROJECT, 2023
** my_strlen.c
** File description:
** my_strlen
*/

#include "../headerfiles.h"

int my_strlen(char const *str)
{
    int i;

    i = 0;
    while (!(str[i] == '\0')) {
        i = i + 1;
    }
    return (i);
}
