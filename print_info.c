/*
** EPITECH PROJECT, 2023
** print_info.c
** File description:
** my info for my hunter
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include "struct.h"
#include "headerfiles.h"
#include <fcntl.h>

void is_arg_valid(int argc, char **argv)
{
    if (argc == 2) {
        print_info();
    } else if (argc == 3) {
        my_printf("%s\n", "Too many arguments");
    }
}

void print_info(void)
{
    int x = 0;
    int fd;
    char *buffer;

    buffer = malloc(sizeof(char) * 500);
    fd = open("info.txt", O_RDONLY);
    read(fd, buffer, 500);
    close(fd);
    while (buffer[x] != '\0') {
        my_printf("%c", buffer[x]);
        x++;
    }
    my_printf("\n");
    free(buffer);
}
