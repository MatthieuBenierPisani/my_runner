/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** my.h
*/

#ifndef MY_H
#define MY_H

#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <SFML/Graphics/Color.h>
#include <SFML/Graphics/Rect.h>
#include <SFML/System.h>
#include <SFML/System/Clock.h>

typedef struct images_s
{
    sfTexture *texture_arbres;
    sfTexture *texture_cite;
    sfTexture *texture_moto_up;
    sfTexture *texture_moto;
    sfTexture *texture_groundstick2;
    sfTexture *texture_groundstick;
    sfTexture *texture_jump;
    sfTexture *texture_line3;
    sfTexture *texture_line2;
    sfTexture *texture_line;
    sfTexture *texture_police2;
    sfTexture *texture_police1;
    sfTexture *texture_POPO;
    sfTexture *texture_POPO2;
    sfTexture *texture_STICK;
    sfTexture *texture_STICK2;
    sfTexture *texture_stickman2;
    sfTexture *texture_stickman1;
    sfTexture *texture_fond;
    sfTexture *texture_fond2;
    sfTexture *texture_ennemi;
    sfTexture *texture_ennemi2;
    sfTexture *texture_vie;
    sfTexture *texture_vie2;
    sfTexture *texture_vie3;
    sfTexture *texture_end;
    sfTexture *texture_end2;
    sfSprite *arbres;
    sfSprite *arbres2;
    sfSprite *cite;
    sfSprite *cite_1;
    sfSprite *moto_up;
    sfSprite *moto;
    sfSprite *moto2;
    sfSprite *groundstick2;
    sfSprite *groundstick;
    sfSprite *jump;
    sfSprite *line3;
    sfSprite *line2;
    sfSprite *line;
    sfSprite *police2;
    sfSprite *police1;
    sfSprite *police1_2;
    sfSprite *POPO;
    sfSprite *POPO2;
    sfSprite *STICK;
    sfSprite *STICK2;
    sfSprite *stickman2;
    sfSprite *stickman1;
    sfSprite *fond;
    sfSprite *fond2;
    sfSprite *ennemi;
    sfSprite *ennemi2;
    sfSprite *vie;
    sfSprite *vie2;
    sfSprite *vie3;
    sfSprite *end;
    sfSprite *end2;
    sfIntRect rect_police;
    sfIntRect rect_stick;
    sfIntRect rect_ennemi;
    sfIntRect rect_quit;
    sfVector2f pos;
    sfVector2f target_pos;
    sfSoundBuffer *buffer;
    sfSound *sound;
}images_t;

typedef struct window_s
{
    sfRenderWindow *window;
    sfVector2i mouse;
    sfEvent event;
    sfEventType type;
    sfMouseButton button;
    sfMusic* music;
    sfClock *clock;
    sfClock *clock2;
    sfClock *score_clock;
    sfTime time;
    sfTime time2;
    sfFont *font;
    sfText *text;
    sfVector2f txt;
    float seconds;
    float seconds2;
    int score;
    int score_step;
    int way;
    int jump;
    int x;
    int y;
    int sx;
    int sy;
    int cx;
    int cy;
    int ax;
    int ay;
    int px;
    int py;
    int ox;
    int oy;
    int mx;
    int my;
    int nx;
    int ny;
    int fx;
    int fy;
    int bx;
    int by;
    int stx;
    int sty;
    int ssx;
    int ssy;
    int ex;
    int ey;
    int eex;
    int eey;
    int viex;
    int viey;
    int viex2;
    int viey2;
    int viex3;
    int viey3;
    int endx;
    int endy;
    int endx2;
    int endy2;
    int poscursor;
}window_t;

//set, create images, textures, music and the window :
void create_images(images_t *, window_t *);
void create_images2(images_t *, window_t *);
void create_texture(images_t *);
void create_texture2(images_t *);
void setTexture1(images_t *);
void setTexture2(images_t *);
void create_window(window_t *, sfVideoMode);
void create_music(images_t *);

//destroy images, textures and the window :
void destroy_sprites(images_t *, window_t *);
void destroy_sprites2(images_t *, window_t *);
void destroy_texture(images_t *, window_t *);
void destroy_texture2(images_t *, window_t *);

//draw images, textures and the window :
void draw(images_t *, window_t *, int *);
void draw2(images_t *, window_t *, int *);
void cs_draw_stick(images_t *, window_t *);

//initialise position values :
void initialise_all(window_t *, images_t *);
void initialise1(window_t *, images_t *);
void initialise2(window_t *, images_t *);
void initialise3(window_t *, images_t *);
void initialise4(window_t *, images_t *);

//diferents objetcs positions :
void pos_tree(window_t *, images_t *);
void pos_town(window_t *, images_t *);
void pos_pol(window_t *, images_t *);
void pos_engine(window_t *, images_t *);
void pos_back(window_t *, images_t *);
void pos_stick(window_t *, images_t *);
void pos_danger(window_t *, images_t *);
void life_pos(window_t *, images_t *);
void pos_end(window_t *, images_t *);

//move objetcs functions :
void move_police(images_t *, window_t *);
void move_stick(images_t *, window_t *);

//rectangles used functions :
void police_rect(images_t *);
void stick_rect(images_t *);

//sf functions :
sfVideoMode init_mode(void);
sfSound *sound_buffer(images_t *);
sfIntRect move_stck(sfIntRect, int, int);
sfIntRect move(sfIntRect, int, int);

//events :
void check_event(window_t *, images_t *);
void jympy(images_t *, window_t *);

//usefull functions :
void my_putchar(char);
int my_strlen(char const *);
int my_putstr(char const *);
char *int_to_str(int);

//display_help :
void display_help(int, char **);

//lives :
void lifes(images_t *, window_t *, int *);
void player_collision(window_t *, images_t *);

//coding style and others :
void coding_style(window_t *, images_t *);
void main_completion(images_t *, window_t *);
void seconds_main(window_t *);
void play_win(images_t *, window_t *);

#endif
