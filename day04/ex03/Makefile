NAME 	= fantasy

SRCS	= ./main.cpp \
		  ./AMateria.cpp \
		  ./Ice.cpp \
		  ./Cure.cpp \
		  ./Character.cpp \
		  ./MateriaSource.cpp \

OBJS 	= $(SRCS:.cpp=.o)

CC 		= clang++
RM		= rm -rf
CFLAGS	= -Wall -Werror -Wextra -g -std=c++98 -pedantic

all:
	@$(MAKE) $(NAME) -j4

%.o:    %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME):	$(OBJS)
	@$(CC) $(OBJS) -o $(NAME)
	@echo $(NAME) compiled!

clean:
	@$(RM) $(OBJS)
	@echo clean .o files

fclean: clean
	@$(RM) $(NAME)
	@echo $(NAME) removed!

re:	fclean $(NAME)
