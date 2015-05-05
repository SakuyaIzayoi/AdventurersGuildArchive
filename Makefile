NAME = adv
SRC = Adventurer.cpp saveAdventurerList.cpp loadAdventurerList.cpp Guild.cpp
OBJ = $(SRC:.cpp=.o)
RM = rm -f
MAIN = main.o
TEST = test.o

#

all: $(OBJ) $(MAIN)
	g++ $(OBJ) $(MAIN) -o $(NAME)

clean:
	-$(RM) *~
	-$(RM) \#*
	-$(RM) *.o
	-$(RM) *.swp
	-$(RM) *.core

fclean: clean
	-$(RM) $(NAME)
	-$(RM) test

re: fclean all clean

test: $(OBJ) $(TEST)
	g++ $(OBJ) $(TEST) -o test
