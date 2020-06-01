/*
** EPITECH PROJECT, 2019
** utils functions
** File description:
** utils functions
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/Config.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "../include/my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i]) {
        i++;
    }
    return (i);
}

int my_putstr(char const *str)
{
    int i = 0;

    while (str[i]) {
        my_putchar(str[i]);
        i++;
    }
    return (0);
}

char *int_to_str(int nb)
{
    char *str;
    int i = 1;
    int j = 0;
    int tmp = nb;

    while (tmp > 9) {
        tmp /= 10;
        i++;
    }
    str = malloc(sizeof(char) * i + 1);
    j = i;
    while (i > 0) {
        str[i - 1] = nb % 10 + 48;
        nb /= 10;
        i--;
    }
    str[j] = '\0';
    return (str);
}
