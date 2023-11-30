/*
** EPITECH PROJECT, 2023
** struct.c
** File description:
** my stuct
*/

#ifndef STRUCT_H
    #define STRUCT_H
typedef struct {
    sfSprite* sprite;
    sfVector2f position;
    float speed;
    sfIntRect currentFrame;
    sfClock* clock;
} Animal;
#endif
