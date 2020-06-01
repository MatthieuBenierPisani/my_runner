/*
** EPITECH PROJECT, 2018
** draw destroy
** File description:
** draw destroy
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/Config.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "../include/my.h"

void draw(images_t *img, window_t *win, int *i)
{
    sfVector2i mouse;

    sfRenderWindow_clear(win->window, sfBlack);
    sfRenderWindow_drawSprite(win->window, img->fond, NULL);
    sfRenderWindow_drawSprite(win->window, img->fond2, NULL);
    sfRenderWindow_drawSprite(win->window, img->arbres, NULL);
    sfRenderWindow_drawSprite(win->window, img->arbres2, NULL);
    sfRenderWindow_drawSprite(win->window, img->cite, NULL);
    sfRenderWindow_drawSprite(win->window, img->cite_1, NULL);
    sfRenderWindow_drawSprite(win->window, img->moto, NULL);
    sfRenderWindow_drawSprite(win->window, img->moto_up, NULL);
    sfRenderWindow_drawSprite(win->window, img->groundstick2, NULL);
    sfRenderWindow_drawSprite(win->window, img->groundstick, NULL);
    draw2(img, win, i);
}

void draw2(images_t *img, window_t *win, int *i)
{
    sfRenderWindow_drawSprite(win->window, img->jump, NULL);
    sfRenderWindow_drawSprite(win->window, img->line3, NULL);
    sfRenderWindow_drawSprite(win->window, img->line2, NULL);
    sfRenderWindow_drawSprite(win->window, img->line, NULL);
    sfRenderWindow_drawSprite(win->window, img->police2, NULL);
    sfRenderWindow_drawSprite(win->window, img->police1, NULL);
    sfRenderWindow_drawSprite(win->window, img->STICK, NULL);
    sfRenderWindow_drawSprite(win->window, img->POPO, NULL);
    sfRenderWindow_drawSprite(win->window, img->ennemi, NULL);
    sfRenderWindow_drawText(win->window, win->text, NULL);
    lifes(img, win, i);
}

void lifes(images_t *img, window_t *win, int *i)
{
    if (win->sty == win->ex)
        *i -= 1;
    if (*i >= 1)
        sfRenderWindow_drawSprite(win->window, img->vie3, NULL);
    if (*i >= 2)
        sfRenderWindow_drawSprite(win->window, img->vie2, NULL);
    if (*i >= 3)
        sfRenderWindow_drawSprite(win->window, img->vie, NULL);
    if (*i == 0) {
        sfSprite_setPosition(img->STICK, (sfVector2f)
        {win->stx = -10000, win->sty = -10000});
        sfSprite_setPosition(img->POPO, (sfVector2f)
        {win->stx = -10000, win->sty = -10000});
        sfRenderWindow_clear(win->window, sfBlack);
        sfRenderWindow_drawSprite(win->window, img->end, NULL);
    }
}
