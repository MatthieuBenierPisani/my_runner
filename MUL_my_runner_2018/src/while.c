/*
** EPITECH PROJECT, 2018
** while main
** File description:
** while main
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/Config.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "../include/my.h"

void coding_style(window_t *win, images_t *img)
{
    sfRenderWindow *window;
    sfEvent event;
    int i = 3;

    initialise_all(win, img);
    while (sfRenderWindow_isOpen(win->window)) {
        pos_end(win, img);
        check_event(win, img);
        pos_tree(win, img);
        pos_town(win, img);
        pos_back(win, img);
        pos_engine(win, img);
        pos_danger(win, img);
        life_pos(win, img);
        move_police(img, win);
        move_stick(img, win);
        draw(img, win, &i);
        sfRenderWindow_display(win->window);
    }
}
