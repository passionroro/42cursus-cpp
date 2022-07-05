NAME 		=	class
OBJ_DIR		=	obj/
SRCS_DIR	=	src/
SRCS		=	main.cpp Sample.class.cpp

OBJS = $(addprefix $(OBJ_DIR), $(SRCS:.cpp=.o))

CXXFLAGS = -std=c++98 -pedantic -Wall -Wextra -Werror
DEBUGGING = -g -O0
CXX = c++
RM = rm -rf
AR = ar rc

##98: CXX = g++-11
##98: all

all: $(NAME)

$(OBJ_DIR)%.o : $(SRCS_DIR)%.cpp
		@mkdir -p $(OBJ_DIR)
		$(CXX) -c $(CXXFLAGS) $(DEBUGGING) $< -o $@

$(NAME): $(OBJS)
		$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
		$(RM) $(OBJ_DIR)
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean re fclean
