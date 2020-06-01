/*
** EPITECH PROJECT, 2018
** event
** File description:
** event
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/Config.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "../include/my.h"

void check_event(window_t *win, images_t *img)
{
    sfEvent event;

    while (sfRenderWindow_pollEvent(win->window, &win->event)) {
        if (win->event.type == sfEvtClosed) {
            sfRenderWindow_close(win->window);
        }
        if (sfKeyboard_isKeyPressed(sfKeyEscape)) {
            sfRenderWindow_close(win->window);
        }
    }
}
