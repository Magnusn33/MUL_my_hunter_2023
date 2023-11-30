/*
** EPITECH PROJECT, 2023
** render_animal.c
** File description:
** Functions for the birds
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include "struct.h"
#include "headerfiles.h"

void build_animal(Animal* a, sfTexture* t, int h)
{
    a->sprite = sfSprite_create();
    sfSprite_setTexture(a->sprite, t, sfTrue);
    a->position.x = 0.0f;
    a->position.y = rand() % h;
    a->speed = 1;
    a->currentFrame = (sfIntRect){0, 0, 110, 110};
    a->clock = sfClock_create();
}

void update_animal(Animal* a, float fD, int wW, int wH)
{
    if (sfTime_asSeconds(sfClock_getElapsedTime(a->clock)) > fD) {
        sfClock_restart(a->clock);
        a->currentFrame.left += a->currentFrame.width;
        if (a->currentFrame.left >= 330) {
            a->currentFrame.left = 0;
        }
    }
    a->position.x += a->speed * fD;
    if (a->position.x > wW) {
        a->position.x = 0;
        a->position.y = rand() % wH;
    }
}

void draw_animal(Animal* a, sfRenderWindow* w)
{
    sfSprite_setTextureRect(a->sprite, a->currentFrame);
    sfSprite_setPosition(a->sprite, a->position);
    sfRenderWindow_drawSprite(w, a->sprite, NULL);
}

int is_mouse_over_animal(Animal* a, sfVector2i mP)
{
    sfFloatRect b = sfSprite_getGlobalBounds(a->sprite);

    return sfFloatRect_contains(&b, mP.x, mP.y);
}

sfTexture* build_animal_texture(void)
{
    return sfTexture_createFromFile("animation_sheet.png", NULL);
}
