/*
** EPITECH PROJECT, 2019
** lives positions
** File description:
** lives positions
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/Config.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "../include/my.h"

void life_pos(window_t *win, images_t *img)
{
    sfSprite_setPosition(img->vie, (sfVector2f) {win->viex, win->viey});
    sfSprite_setPosition(img->vie2, (sfVector2f) {win->viex2, win->viey2});
    sfSprite_setPosition(img->vie3, (sfVector2f) {win->viex3, win->viey3});
    win->viey = 50;
    win->viex = 1610;
    win->viey2 = 50;
    win->viex2 = 1695;
    win->viey3 = 50;
    win->viex3 = 1780;
}

void pos_end(window_t *win, images_t *img)
{
    sfSprite_setPosition(img->end, (sfVector2f) {win->endx, win->endy});
    win->endy = 0;
    win->endx = 0;
}
