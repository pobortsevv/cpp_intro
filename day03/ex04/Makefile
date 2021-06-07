NAME 	= master

SRCS	= ./main.cpp \
		  ./FragTrap.cpp \
		  ./ScavTrap.cpp \
		  ./ClapTrap.cpp \
		  ./NinjaTrap.cpp \
		  ./SuperTrap.cpp \

OBJS 	= $(SRCS:.cpp=.o)

CC 		= clang++
RM		= rm -rf
CFLAGS	= -Wall -Werror -Wextra -g

all:
	@$(MAKE) $(NAME) -j4

%.o:    %.c
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
