# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: megrisse <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/18 17:29:31 by megrisse          #+#    #+#              #
#    Updated: 2022/03/18 17:29:56 by megrisse         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
RM = rm -rf
FLAGS = -Wall -Wextra -Werror

SRC_SERVER = ft_printf.c  \
			printf_tool.c \
			printf_tool1.c \
			utils.c \
			server.c \

SRC_SERVER_B = ft_printf.c  \
			printf_tool.c \
			printf_tool1.c \
			utils.c \
			server_bonus.c \

SRC_CLIENT = ft_printf.c  \
			printf_tool.c \
			printf_tool1.c \
			utils.c \
			client.c \

SRC_CLIENT_B = ft_printf.c  \
			printf_tool.c \
			printf_tool1.c \
			utils.c \
			client_bonus.c \
			
OBJ_SERVER = $(SRC_SERVER:.c=.o)
OBJ_CLIENT = $(SRC_CLIENT:.c=.o)
OBJ_SERVER_B = $(SRC_SERVER_B:.c=.o)
OBJ_CLIENT_B = $(SRC_CLIENT_B:.c=.o)

SERVER = server
CLIENT = client
SERVER_B = server_bonus
CLIENT_B = client_bonus

all : $(SERVER) $(CLIENT)

$(SERVER) : $(OBJ_SERVER)
	$(CC) $(OBJ_SERVER) -o $(SERVER)

$(CLIENT) : $(OBJ_CLIENT)
	$(CC) $(OBJ_CLIENT) -o $(CLIENT)

$(SERVER_B) : $(OBJ_SERVER_B)
	$(CC) $(OBJ_SERVER_B) -o $(SERVER_B)

$(CLIENT_B) : $(OBJ_CLIENT_B)
	$(CC) $(OBJ_CLIENT_B) -o $(CLIENT_B)


bonus : $(SERVER_B) $(CLIENT_B)

clean : 
	$(RM) $(OBJ_SERVER) $(OBJ_CLIENT) $(OBJ_SERVER_B) $(OBJ_CLIENT_B)

fclean : clean
	$(RM) $(CLIENT) $(SERVER) $(CLIENT_B) $(SERVER_B)

re : fclean $(CLIENT) $(SERVER) $(CLIENT_B) $(SERVER_B)

.PHONY : all clean fclean re