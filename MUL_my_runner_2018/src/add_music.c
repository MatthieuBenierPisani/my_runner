/*
** EPITECH PROJECT, 2019
** music
** File description:
** music
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/Config.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "../include/my.h"

void create_music(images_t *img)
{
    img->buffer = sfSoundBuffer_createFromFile(
        "assets/sounds/sound.ogg");
    img->sound = sound_buffer(img);
}

sfSound *sound_buffer(images_t *img)
{
    img->sound = sfSound_create();
    sfSound_setBuffer(img->sound, img->buffer);
    return (img->sound);
}
