/*
** EPITECH PROJECT, 2023
** handle_exit.c
** File description:
** Functions for exit
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include "struct.h"
#include "headerfiles.h"

void handle_events(sfRenderWindow* window)
{
    sfEvent e;

    while (sfRenderWindow_pollEvent(window, &e)) {
        if (e.type == sfEvtKeyPressed && e.key.code == sfKeyEscape) {
            sfRenderWindow_close(window);
        }
    }
}
