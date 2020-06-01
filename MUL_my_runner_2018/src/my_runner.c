/*
** EPITECH PROJECT, 2018
** my_hunter
** File description:
** my_hunter
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/Config.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "../include/my.h"

void seconds_main(window_t *win)
{
    win->seconds = 0, 0;
    win->x = 0;
    win->y = 0;
}

int main(int ac, char *av[])
{
    sfVideoMode mode = init_mode();
    sfIntRect rect;
    sfMusic *music;
    window_t *win = malloc(sizeof(window_t));
    images_t *img = malloc(sizeof(images_t));


    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h') {
        display_help(ac, av);
    } else {
        music = sfMusic_createFromFile("assets/sounds/music.ogg");
        sfMusic_play(music);
        create_window(win, mode);
        create_images(img, win);
        create_texture(img);
        stick_rect(img);
        police_rect(img);
        seconds_main(win);
        coding_style(win, img);
    }
}
