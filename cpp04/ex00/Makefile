########## 		   NAMES 		##########

NAME = animal

########## 		  SOURCES 		##########

SRC_PATH = ./src/

OBJ_DIR = objs

OBJ_PATH = $(OBJ_DIR)/

SRC = $(SRC_PATH)main.cpp \
	$(SRC_PATH)Animal.cpp \
	$(SRC_PATH)Cat.cpp \
	$(SRC_PATH)Dog.cpp \
	$(SRC_PATH)WrongAnimal.cpp \
	$(SRC_PATH)WrongCat.cpp 

########## 		  INCLUDES 		##########

HEAD = ./inc

########## 		COMPILATION 	##########

OBJ = $(patsubst %.cpp, %.o, $(subst $(SRC_PATH), $(OBJ_PATH), $(SRC)))

CC = g++

########## 		   FLAGS 		##########

CFLAGS = -Wall -Wextra -Werror -std=c++98

#MLC_FLAGS = -fsanitize=address

########## 		   COLORS 		##########

GREEN		=	\033[0;32m
YELLOW	=	\033[0;33m
RED		=	\033[0;31m
BLUE_PISK		=	\033[0;34;5;199m
BLUE		=	\033[0;36m
VIOLET	=	\033[0;38;5;199m
RESET		=	\033[0m

########## 		  COMMANDS		##########

RM = rm -rf

########## 		  MESSAGES 		##########

CREATE_PROJ_MSG = @echo "\n[ $(GREEN)$(NAME) created$(RESET) ]\n"

REMOVED_MSG = @echo "\n[ $(RED)$(NAME) removed$(RESET) ]\n"

########## 		  TARGETS 		##########

${NAME}: ${OBJ_DIR} ${OBJ}
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME) 
$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(OBJ_PATH)%.o:	$(SRC_PATH)%.cpp | $(OBJ_DIR)
	@$(CC) $(CFLAGS) -I $(HEAD) -c $(^) -o $(@)
	@echo "$(YELLOW)[ Compiling $(subst .o,.cpp,$(notdir $@)) ]$(RESET)"

########## 		   RULES 		##########

all: ${NAME}
	${CREATE_PROJ_MSG}

clean:
	${RM} ${OBJ_PATH}

fclean: clean
	${RM} ${NAME}
	${REMOVED_MSG}

re:	fclean all

.SILENT: ${OBJ} ${NAME} ${OBJ_DIR} clean fclean

.PHONY: all clean fclean re
