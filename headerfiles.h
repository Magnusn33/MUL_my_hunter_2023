/*
** EPITECH PROJECT, 2023
** headerfiles.h
** File description:
** My header files in one place
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include "struct.h"
#include <fcntl.h>

#ifndef HEADER_H
    #define HEADER_H
void build_animal(Animal* a, sfTexture* t, int h);
void update_animal(Animal* a, float fD, int wW, int wH);
void draw_animal(Animal* a, sfRenderWindow* w);
int is_mouse_over_animal(Animal* a, sfVector2i mP);
sfTexture* build_animal_texture(void);
void clean_up_rest(sfSprite* bg, sfTexture* st, sfTexture* at);
void clean_up_resources(sfRenderWindow* w, Animal* a, int nb_a);
void handle_mouse_clicks(Animal* animals, int numAnimals, sfRenderWindow* w);
void extend_mouse(Animal* animals, int numAnimals, sfVector2i mousePosition);
void handle_events(sfRenderWindow* window);
sfRenderWindow* build_window_texture(unsigned int wW, unsigned int wH);
sfSprite* build_texture(sfTexture* t);
void draw_scene(sfRenderWindow* w, sfSprite* bg, Animal* animals, int nb_a);
int my_putstr(char const *str);
void my_putchar(char c);
int my_put_nbr(int nb);
int my_strlen(char const *str);
int my_printf(const char *format, ...);
int my_str_to_int(char str[]);
void is_arg_valid(int argc, char **argv);
void print_info(void);
int execute_program(void);
#endif
