NAME 	= megaphone

SRCS	= ./megaphone.cpp

OBJS 	= $(SRCS:.cpp=.o)

CC 		= clang++
RM		= rm -rf
CFLAGS	= -Wall -Werror -Wextra -g -std=c++98


all:
	@$(MAKE) $(NAME) -j4

%.o:    %.cpp
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(NAME):	$(OBJS)
	@$(CC) $(OBJS) -o $(NAME)
	@echo megaphone compiled!

clean:
	@$(RM) $(OBJS)
	@echo clean .o files

fclean: clean
	@$(RM) $(NAME)
	@echo megaphone removed!

re:	fclean $(NAME)
