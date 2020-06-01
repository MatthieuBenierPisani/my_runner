/*
** EPITECH PROJECT, 2019
** parallax functions
** File description:
** parallax functions
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/Config.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "../include/my.h"

void pos_tree(window_t *win, images_t *img)
{
    sfSprite_setPosition(img->arbres, (sfVector2f) {win->x, win->y});
    sfSprite_setPosition(img->arbres2, (sfVector2f) {win->sx, win->sy});
    win->y = 315;
    win->x -= 2;
    win->sy = 315;
    win->sx -= 2;
    if (win->x < -1920)
        win->x = 1920;
    if (win->sx < -1920)
        win->sx = 1920;
}

void pos_town(window_t *win, images_t *img)
{
    sfSprite_setPosition(img->cite, (sfVector2f) {win->cx, win->cy});
    sfSprite_setPosition(img->cite_1, (sfVector2f) {win->ax, win->ay});
    win->cy = 0;
    win->cx -= 1;
    win->ay = 0;
    win->ax -= 1;
    if (win->cx < -1918)
        win->cx = 1918;
    if (win->ax < -1918)
        win->ax = 1918;
}

void pos_engine(window_t *win, images_t *img)
{
    sfSprite_setPosition(img->moto, (sfVector2f) {win->mx, win->my});
    sfSprite_setPosition(img->moto2, (sfVector2f) {win->nx, win->ny});
    win->my = 815;
    win->mx += 1;
    win->ny = 815;
    win->nx += 1;
    if (win->mx < -1920)
        win->mx = 1920;
    if (win->nx < -1920)
        win->nx = 1920;
}

void pos_back(window_t *win, images_t *img)
{
    sfSprite_setPosition(img->fond, (sfVector2f) {win->fx, win->fy});
    sfSprite_setPosition(img->fond2, (sfVector2f) {win->bx, win->by});
    win->fy = 0;
    win->fx -= 2;
    win->by = 0;
    win->bx -= 2;
    if (win->fx < -1918)
        win->fx = 1918;
    if (win->bx < -1918)
        win->bx = 1918;
}

void pos_danger(window_t *win, images_t *img)
{
    sfSprite_setPosition(img->ennemi, (sfVector2f) {win->ex, win->ey});
    sfSprite_setPosition(img->ennemi2, (sfVector2f) {win->eex, win->eey});
    win->ey = 650;
    win->ex -= 2;
    win->eey = 650;
    win->eex -= 2;
    if (win->ex < 0)
        win->ex = 1920;
    if (win->eex < -1920)
        win->eey = 1920;
}
