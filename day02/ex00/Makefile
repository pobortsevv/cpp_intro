NAME 	= pony_Alloc

SRCS	= ./main.cpp \
		  ./Pony.cpp \

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
	@echo pony_Alloc compiled!

clean:
	@$(RM) $(OBJS)
	@echo clean .o files

fclean: clean
	@$(RM) $(NAME)
	@echo pony_Alloc removed!

re:	fclean $(NAME)
