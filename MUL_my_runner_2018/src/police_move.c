/*
** EPITECH PROJECT, 2018
** move police
** File description:
** move police
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/Config.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "../include/my.h"

sfIntRect move(sfIntRect rect_police, int offset, int max)
{
    if (rect_police.left == max - offset) {
        rect_police.left = 0;
    } else {
        rect_police.left += offset;
    }
    return (rect_police);
}

void police_rect(images_t *img)
{
    img->rect_police.top = 0;
    img->rect_police.left = 0;
    img->rect_police.height = 360;
    img->rect_police.width = 297;
}

void move_police(images_t *img, window_t *win)
{
    win->time = sfClock_getElapsedTime(win->clock);
    win->seconds = (win->time.microseconds / 1000000.0);
    if (win->seconds > 0.08) {
        img->rect_police = move(img->rect_police, 305, 610);
        sfSprite_setTextureRect(img->POPO, img->rect_police);
        sfRenderWindow_drawSprite(win->window, img->POPO, NULL);
        sfRenderWindow_display(win->window);
        sfClock_restart(win->clock);
        sfSprite_setPosition(img->POPO, (sfVector2f)
        {win->px += 10, win->py = 690});
        win->seconds = 0.0;
    }
}
