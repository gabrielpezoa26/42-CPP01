NAME = brainz
OBJECTS = objects/main.o objects/Zombie.o objects/newZombie.o objects/randomChump.o

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
OBJ_DIR = objects

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJECTS)

$(OBJECTS): | $(OBJ_DIR)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)



objects/Zombie.o: Zombie.cpp
	$(CC) $(CFLAGS) -c Zombie.cpp -o objects/Zombie.o

objects/newZombie.o: newZombie.cpp
	$(CC) $(CFLAGS) -c newZombie.cpp -o objects/newZombie.o

objects/randomChump.o: randomChump.cpp
	$(CC) $(CFLAGS) -c randomChump.cpp -o objects/randomChump.o

objects/main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp -o objects/main.o



clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

run: all
	./$(NAME)

val: all
	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./$(NAME)

re: fclean all