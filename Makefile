NAME = adv
SRC = Adventurer.cpp main.cpp
OBJ = $(SRC:.cpp=.o)
RM = rm -f

#

all: $(OBJ)
	g++ $(OBJ) -o $(NAME)

clean:
	-$(RM) *~
	-$(RM) \#*
	-$(RM) *.o
	-$(RM) *.swp
	-$(RM) *.core

fclean: clean
	-$(RM) $(NAME)

re: fclean all clean
