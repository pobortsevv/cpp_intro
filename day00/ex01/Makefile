NAME 	= phonebook

SRCS	= ./main.cpp \
		  ./Contact.cpp \
		  ./ContactList.cpp \

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
	@echo phonebook compiled!

clean:
	@$(RM) $(OBJS)
	@echo clean .o files

fclean: clean
	@$(RM) $(NAME)
	@echo phonebook removed!

re:	fclean $(NAME)
