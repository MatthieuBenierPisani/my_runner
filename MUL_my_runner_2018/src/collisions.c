/*
** EPITECH PROJECT, 2019
** check collisions
** File description:
** check collisions
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/Config.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "../include/my.h"

void ennemi_rect(images_t *img, window_t *win)
{
    img->rect_ennemi.top = 0;
    img->rect_ennemi.left = 0;
    img->rect_ennemi.height = 170;
    img->rect_ennemi.width = 60;
    sfSprite_setTextureRect(img->ennemi, img->rect_ennemi);
    sfRenderWindow_drawSprite(win->window, img->STICK, NULL);
    sfRenderWindow_display(win->window);
}
