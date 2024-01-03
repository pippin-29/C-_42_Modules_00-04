NAME := megaphone

COMPILE := c++ -std=c++98 -Wextra -Werror -Wall megaphone.cpp -o $(NAME)

all:
	$(COMPILE)

test: all
			$(COMPILE) -g -fsanitize=address
			./megaphone BIINgo "hello.c" 1243a



