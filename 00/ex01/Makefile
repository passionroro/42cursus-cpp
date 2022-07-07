# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rohoarau <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/07 14:58:03 by rohoarau          #+#    #+#              #
#    Updated: 2022/07/07 14:59:29 by rohoarau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	phonebook
SOURCE			=	main.cpp Phonebook.cpp
CXX				= 	c++
OBJECT			=	$(SOURCE:.cpp=.o)
CXXFLAGS		= 	-Wall -Wextra -Werror -std=c++98
RM				=	rm -rf

all: $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJECT)
	$(CXX) $(CXXFLAGS) $(OBJECT) -o $(NAME)
	clear

clean:
	$(RM) $(OBJECT)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
