/*
** EPITECH PROJECT, 2023
** handle_clicks.c
** File description:
** Functions for events
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include "struct.h"
#include "headerfiles.h"

void extend_mouse(Animal* animals, int numAnimals, sfVector2i mousePosition)
{
    for (int i = 0; i < numAnimals; ++i) {
        if (is_mouse_over_animal(&animals[i], mousePosition)) {
            build_animal(&animals[i], build_animal_texture(), 1920);
        }
    }
}

void handle_mouse_clicks(Animal* animals, int numAnimals, sfRenderWindow* w)
{
    sfVector2i mousePosition;

    if (sfMouse_isButtonPressed(sfMouseLeft)) {
        mousePosition = sfMouse_getPositionRenderWindow(w);
        extend_mouse(animals, numAnimals, mousePosition);
    }
}
