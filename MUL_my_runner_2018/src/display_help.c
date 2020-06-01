/*
** EPITECH PROJECT, 2019
** display help
** File description:
** -h
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/Config.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "../include/my.h"

void display_help(int ac, char **av)
{
    my_putstr("Runner game created with CSFML\n\nUSAGE\n\t");
    my_putstr("USER INTERACTIONS\n SPACE_KEY\tjump.\n");
    my_putstr(" ECHAP_KEY\tquit the game.\n\n");
}
