# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rohoarau <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/06 16:52:43 by rohoarau          #+#    #+#              #
#    Updated: 2022/07/06 16:53:32 by rohoarau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	megaphone
SOURCE			=	megaphone.cpp
CXX				= 	c++
OBJECT			=	$(SOURCE:.cpp=.o)
CXXFLAGS		= 	-Wall -Wextra -Werror -std=c++98
RM				=	rm -rf

all: $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJECT)
	$(CXX) $(CXXFLAGS) $(OBJECT) -o $(NAME)

clean:
	$(RM) $(OBJECT)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
