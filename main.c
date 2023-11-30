/*
** EPITECH PROJECT, 2023
** main.c
** File description:
** my main for my hunter
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include "struct.h"
#include "headerfiles.h"

int execute_program(void)
{
    unsigned int windowWidth = 1920;
    unsigned int windowHeight = 1080;
    int nb_a = 5;
    sfRenderWindow* window = build_window_texture(windowWidth, windowHeight);
    sfTexture* animalTexture = build_animal_texture();
    sfTexture* seaTexture = sfTexture_createFromFile("sea.jpg", NULL);
    sfSprite* bg = build_texture(seaTexture);
    Animal animals[nb_a];

    for (int i = 0; i < nb_a; ++i) {
            build_animal(&animals[i], animalTexture, windowHeight);
        }
    while (sfRenderWindow_isOpen(window)) {
        handle_events(window);
        draw_scene(window, bg, animals, nb_a);
        handle_mouse_clicks(animals, nb_a, window);
    }
    clean_up_rest(bg, seaTexture, animalTexture);
    clean_up_resources(window, animals, nb_a);
}

int main(int argc, char **argv)
{
    if (argc == 1) {
        execute_program();
    } else {
        is_arg_valid(argc, argv);
    }
    return 0;
}
