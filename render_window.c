/*
** EPITECH PROJECT, 2023
** render_window.c
** File description:
** Functions for the background
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include "struct.h"
#include "headerfiles.h"

sfRenderWindow* build_window_texture(unsigned int wW, unsigned int wH)
{
    sfVideoMode m = {wW, wH, 32};

    return sfRenderWindow_create(m, "background", sfResize | sfClose, NULL);
}

sfSprite* build_texture(sfTexture* t)
{
    sfSprite* s = sfSprite_create();

    sfSprite_setTexture(s, t, sfTrue);
    return s;
}

void draw_scene(sfRenderWindow* w, sfSprite* bg, Animal* animals, int nb_a)
{
    sfRenderWindow_clear(w, sfColor_fromRGB(135, 206, 250));
    sfRenderWindow_drawSprite(w, bg, NULL);
    for (int i = 0; i < nb_a; ++i) {
        update_animal(&animals[i], 0.2f, 1920, 1080);
        draw_animal(&animals[i], w);
    }
    sfRenderWindow_display(w);
}
