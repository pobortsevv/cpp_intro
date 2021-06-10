NAME 	= moar_brains

SRCS	= ./main.cpp \
		  ./Zombie.cpp \
		  ./ZombieHorde.cpp \

OBJS 	= $(SRCS:.cpp=.o)

CC 		= clang++
RM		= rm -rf
CFLAGS	= -Wall -Werror -Wextra -g -std=c++98

all:
	@$(MAKE) $(NAME) -j4

%.o:    %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME):	$(OBJS)
	@$(CC) $(OBJS) -o $(NAME)
	@echo moar_brains compiled!

clean:
	@$(RM) $(OBJS)
	@echo clean .o files

fclean: clean
	@$(RM) $(NAME)
	@echo moar_brains removed!

re:	fclean $(NAME)
