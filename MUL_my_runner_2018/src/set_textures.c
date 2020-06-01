/*
** EPITECH PROJECT, 2019
** set textures
** File description:
** set textures
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/Config.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "../include/my.h"

void setTexture1(images_t *img)
{
    sfSprite_setTexture(img->arbres, img->texture_arbres, sfTrue);
    sfSprite_setTexture(img->arbres2, img->texture_arbres, sfTrue);
    sfSprite_setTexture(img->cite, img->texture_cite, sfTrue);
    sfSprite_setTexture(img->cite_1, img->texture_cite, sfTrue);
    sfSprite_setTexture(img->moto_up, img->texture_moto_up, sfTrue);
    sfSprite_setTexture(img->moto, img->texture_moto, sfTrue);
    sfSprite_setTexture(img->moto2, img->texture_moto, sfTrue);
    sfSprite_setTexture(img->groundstick2, img->texture_groundstick2, sfTrue);
    sfSprite_setTexture(img->groundstick, img->texture_groundstick, sfTrue);
    sfSprite_setTexture(img->jump, img->texture_jump, sfTrue);
    sfSprite_setTexture(img->POPO, img->texture_POPO, sfTrue);
    sfSprite_setTexture(img->POPO2, img->texture_POPO2, sfTrue);
    sfSprite_setTexture(img->STICK, img->texture_STICK, sfTrue);
    sfSprite_setTexture(img->STICK2, img->texture_STICK2, sfTrue);
    sfSprite_setTexture(img->fond, img->texture_fond, sfTrue);
    sfSprite_setTexture(img->fond2, img->texture_fond, sfTrue);
    sfSprite_setTexture(img->ennemi, img->texture_ennemi, sfTrue);
    sfSprite_setTexture(img->ennemi2, img->texture_ennemi2, sfTrue);
    setTexture2(img);
}

void setTexture2(images_t *img)
{
    sfSprite_setTexture(img->vie, img->texture_vie, sfTrue);
    sfSprite_setTexture(img->vie2, img->texture_vie2, sfTrue);
    sfSprite_setTexture(img->vie3, img->texture_vie3, sfTrue);
    sfSprite_setTexture(img->end, img->texture_end, sfTrue);
}
