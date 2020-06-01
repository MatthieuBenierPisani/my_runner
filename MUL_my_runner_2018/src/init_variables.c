/*
** EPITECH PROJECT, 2019
** initialize variables
** File description:
** initialize variables
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/Config.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "../include/my.h"

void initialise_all(window_t *win, images_t *img)
{
    win->font = sfFont_createFromFile("./assets/font/pixel.ttf");
    win->text = sfText_create();
    sfText_setFont(win->text, win->font);
    sfText_setPosition(win->text, win->txt);
    sfText_setCharacterSize(win->text, 100);
    initialise1(win, img);
    initialise2(win, img);
    initialise3(win, img);
    initialise4(win, img);
}

void initialise1(window_t *win, images_t *img)
{
    win->y = 550;
    win->x = 0;
    win->sy = 550;
    win->sx = 1920;
    win->cy = 0;
    win->cx = 0;
    win->ay = 0;
    win->ax = 1918;
}

void initialise2(window_t *win, images_t *img)
{
    win->py = 500;
    win->px = 0;
    win->oy = 500;
    win->ox = 1920;
    win->my = 400;
    win->mx = 490;
    win->ny = 400;
    win->nx = 1920;
}

void initialise3(window_t *win, images_t *img)
{
    win->fy = 0;
    win->fx = 0;
    win->by = 0;
    win->bx = 1918;
    win->stx = 500;
    win->sty = 0;
    win->ssx = 500;
    win->ssy = 1920;
    sfSprite_setPosition(img->STICK, (sfVector2f)
    {win->stx += 0, win->sty = 650});
}

void initialise4(window_t *win, images_t *img)
{
    win->ex = 1400;
    win->ey = 5;
    win->eex = 1400;
    win->eey = 1920;
    win->viex = 500;
    win->viey = 500;
    win->viex2 = 500;
    win->viey2 = 500;
    win->viex3 = 500;
    win->viey3 = 500;
    win->endx = 0;
    win->endy = 0;
}
