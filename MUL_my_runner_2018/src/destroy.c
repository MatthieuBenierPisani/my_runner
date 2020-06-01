/*
** EPITECH PROJECT, 2019
** destroy textures, sprites and more
** File description:
** destroy
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/Config.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "../include/my.h"

void destroy_sprites(images_t *img, window_t *win)
{
    sfSoundBuffer_destroy(img->buffer);
    sfSprite_destroy(img->cite);
    sfSprite_destroy(img->cite_1);
    sfSprite_destroy(img->arbres);
    sfSprite_destroy(img->arbres2);
    sfSprite_destroy(img->moto);
    sfSprite_destroy(img->moto_up);
    sfSprite_destroy(img->groundstick2);
    sfSprite_destroy(img->groundstick);
    sfSprite_destroy(img->jump);
    sfSprite_destroy(img->line3);
    sfSprite_destroy(img->line2);
    sfSprite_destroy(img->line);
    destroy_sprites2(img, win);
    free(img);
    free(win);
}

void destroy_sprites2(images_t *img, window_t *win)
{
    sfSprite_destroy(img->police2);
    sfSprite_destroy(img->police1);
    sfSprite_destroy(img->police1_2);
    sfSprite_destroy(img->POPO);
    sfSprite_destroy(img->POPO2);
    sfSprite_destroy(img->STICK);
    sfSprite_destroy(img->STICK2);
    sfSprite_destroy(img->fond);
    sfSprite_destroy(img->ennemi);
    sfSprite_destroy(img->ennemi2);
    sfSprite_destroy(img->vie);
    sfSprite_destroy(img->vie2);
    sfSprite_destroy(img->vie3);
    sfSoundBuffer_destroy(img->buffer);
    sfRenderWindow_destroy(win->window);
}

void destroy_texture(images_t *img, window_t *win)
{
    sfTexture_destroy(img->texture_cite);
    sfTexture_destroy(img->texture_arbres);
    sfTexture_destroy(img->texture_moto_up);
    sfTexture_destroy(img->texture_moto);
    sfTexture_destroy(img->texture_groundstick2);
    sfTexture_destroy(img->texture_groundstick);
    sfTexture_destroy(img->texture_jump);
    sfTexture_destroy(img->texture_line3);
    sfTexture_destroy(img->texture_line2);
    sfTexture_destroy(img->texture_line);
}

void destroy_texture2(images_t *img, window_t *win)
{
    sfTexture_destroy(img->texture_police2);
    sfTexture_destroy(img->texture_police1);
    sfTexture_destroy(img->texture_POPO);
    sfTexture_destroy(img->texture_POPO2);
    sfTexture_destroy(img->texture_STICK);
    sfTexture_destroy(img->texture_STICK2);
    sfTexture_destroy(img->texture_ennemi);
    sfTexture_destroy(img->texture_ennemi2);
    sfTexture_destroy(img->texture_fond);
    sfTexture_destroy(img->texture_vie);
    sfTexture_destroy(img->texture_vie2);
    sfTexture_destroy(img->texture_vie3);
    sfTexture_destroy(img->texture_end);
    sfTexture_destroy(img->texture_end2);
    sfText_destroy(win->text);
}
