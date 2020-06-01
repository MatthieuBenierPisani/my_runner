/*
** EPITECH PROJECT, 2019
** move player function
** File description:
** move player function
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/Config.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "../include/my.h"

sfIntRect move_stck(sfIntRect rect_stick, int offset, int max)
{
    if (rect_stick.left == max - offset) {
        rect_stick.left = 0;
    } else {
        rect_stick.left += offset;
    }
    return (rect_stick);
}

void stick_rect(images_t *img)
{
    img->rect_stick.top = 0;
    img->rect_stick.left = 0;
    img->rect_stick.height = 170;
    img->rect_stick.width = 65;
}

void cs_draw_stick(images_t *img, window_t *win)
{
    sfSprite_setTextureRect(img->STICK, img->rect_stick);
    sfRenderWindow_drawSprite(win->window, img->STICK, NULL);
    sfRenderWindow_display(win->window);
    sfClock_restart(win->clock2);
}

void move_stick(images_t *img, window_t *win)
{
    static int i = 0;

    win->time2 = sfClock_getElapsedTime(win->clock2);
    win->seconds2 = (win->time.microseconds / 1000000.0);
    if (win->seconds2 > 0.08) {
        sfText_setString(win->text, int_to_str(i));
        i++;
        img->rect_stick = move_stck(img->rect_stick, 65, 130);
        cs_draw_stick(img, win);
        if (sfKeyboard_isKeyPressed(sfKeySpace) == sfTrue && win->jump == 0) {
            sfSound_play(img->sound);
            i++;
            win->jump = 1;
            win->way = 0;
        }
        if (win->jump == 1 && win->way == 0) {
            win->sty -= 50;
            sfSprite_setPosition(img->STICK, (sfVector2f) {win->stx, win->sty});
        }
        jympy(img, win);
    }
}

void jympy(images_t *img, window_t *win)
{
    if (win->jump == 1 && win->way == 1) {
        win->sty += 50;
        sfSprite_setPosition(img->STICK, (sfVector2f) {win->stx, win->sty});
    }
    if (win->sty < 400)
        win->way = 1;
    if (win->sty >= 650)
        win->jump = 0;
    win->seconds2 = 0.0;
}
