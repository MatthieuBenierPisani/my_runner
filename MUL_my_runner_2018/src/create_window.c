/*
** EPITECH PROJECT, 2019
** create window
** File description:
** create window
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/Config.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "../include/my.h"

void create_window(window_t *win, sfVideoMode mode)
{
    win->window = sfRenderWindow_create(
        mode, "SFML window", sfResize | sfClose, NULL);
}

sfVideoMode init_mode(void)
{
    sfVideoMode mode;
    mode.height = 1080;
    mode.width = 1920;
    mode.bitsPerPixel = 32;
    return (mode);
}
