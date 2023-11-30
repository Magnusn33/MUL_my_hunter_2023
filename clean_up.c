/*
** EPITECH PROJECT, 2023
** clean_up.c
** File description:
** Functions for tcleaning up
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include "struct.h"
#include "headerfiles.h"

void clean_up_rest(sfSprite* bg, sfTexture* st, sfTexture* at)
{
    sfSprite_destroy(bg);
    sfTexture_destroy(st);
    sfTexture_destroy(at);
}

void clean_up_resources(sfRenderWindow* w, Animal* a, int nb_a)
{
    sfRenderWindow_destroy(w);
    for (int i = 0; i < nb_a; ++i) {
        sfSprite_destroy(a[i].sprite);
        sfClock_destroy(a[i].clock);
    }
}
