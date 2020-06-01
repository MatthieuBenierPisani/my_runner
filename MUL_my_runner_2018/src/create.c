/*
** EPITECH PROJECT, 2018
** create
** File description:
** create
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/Config.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "../include/my.h"

void create_images(images_t *img, window_t *win)
{
    img->arbres = sfSprite_create();
    img->arbres2 = sfSprite_create();
    img->cite = sfSprite_create();
    img->cite_1 = sfSprite_create();
    img->moto_up = sfSprite_create();
    img->moto = sfSprite_create();
    img->moto2 = sfSprite_create();
    img->groundstick2 = sfSprite_create();
    img->groundstick = sfSprite_create();
    img->jump = sfSprite_create();
    img->line3 = sfSprite_create();
    img->line2 = sfSprite_create();
    img->line = sfSprite_create();
    img->police2 = sfSprite_create();
    img->police1 = sfSprite_create();
    create_images2(img, win);
}

void create_images2(images_t *img, window_t *win)
{
    img->STICK = sfSprite_create();
    img->STICK2 = sfSprite_create();
    img->POPO = sfSprite_create();
    img->POPO2 = sfSprite_create();
    img->police1_2 = sfSprite_create();
    img->ennemi = sfSprite_create();
    img->ennemi2 = sfSprite_create();
    img->fond = sfSprite_create();
    img->fond2 = sfSprite_create();
    img->vie = sfSprite_create();
    img->vie2 = sfSprite_create();
    img->vie3 = sfSprite_create();
    img->end = sfSprite_create();
    win->clock = sfClock_create();
    win->clock2 = sfClock_create();
}

void create_texture(images_t *img)
{
    img->texture_arbres = sfTexture_createFromFile(
        "assets/images/arbres.png", NULL);
    img->texture_cite = sfTexture_createFromFile(
        "assets/images/cite.png", NULL);
    img->texture_moto = sfTexture_createFromFile(
        "assets/images/moto.png", NULL);
    img->texture_POPO = sfTexture_createFromFile(
        "assets/images/POLICE.png", NULL);
    img->texture_POPO2 = sfTexture_createFromFile(
        "assets/images/POLICE.png", NULL);
    img->texture_STICK = sfTexture_createFromFile(
        "assets/images/STICK.png", NULL);
    img->texture_STICK2 = sfTexture_createFromFile(
        "assets/images/STICK.png", NULL);
    img->texture_fond = sfTexture_createFromFile(
        "assets/images/fond_bleu.png", NULL);
    create_texture2(img);
}

void create_texture2(images_t *img)
{
    img->texture_ennemi = sfTexture_createFromFile(
        "assets/images/ennemi.png", NULL);
    img->texture_ennemi2 = sfTexture_createFromFile(
        "assets/images/ennemi.png", NULL);
    img->texture_vie = sfTexture_createFromFile(
        "assets/images/vie.png", NULL);
    img->texture_vie2 = sfTexture_createFromFile(
        "assets/images/vie.png", NULL);
    img->texture_vie3 = sfTexture_createFromFile(
        "assets/images/vie.png", NULL);
    img->texture_end = sfTexture_createFromFile(
        "assets/images/end.png", NULL);
    img->texture_end2 = sfTexture_createFromFile(
        "assets/images/end2.png", NULL);
    img->buffer = sfSoundBuffer_createFromFile(
        "assets/sounds/jump.ogg");
    img->sound = sound_buffer(img);
    setTexture1(img);
}
