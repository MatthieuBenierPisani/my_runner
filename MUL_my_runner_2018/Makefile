##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile
##

NAME	=	my_runner

SOURCE	=	src/create.c 	\
		src/draw.c 	\
		src/destroy.c 	\
		src/event.c 	\
		src/while.c 	\
		src/parallax.c 	\
		src/police_move.c 	\
		src/player_move.c 	\
		src/init_variables.c 	\
		src/utils_functions.c 	\
		src/create_window.c 	\
		src/display_help.c 	\
		src/add_music.c 	\
		src/collisions.c 	\
		src/lives_positions.c 	\
		src/set_textures.c 	\
		src/my_runner.c

OBJ	=	$(SOURCE:.c=.o)

all	:	$(NAME)
		rm src/*.o
		find -type f -name '*~' -delete

$(NAME)	:	$(OBJ)
		gcc -o $(NAME) $(SOURCE) -I./include -l csfml-window -l csfml-graphics -l csfml-audio -l csfml-system

clean	:
		find -type f -name '*~' -delete
		find -type f -name '*#' -delete
		find -type f -name '*.o' -delete

fclean	:	clean
