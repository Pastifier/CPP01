# Program
NAME := zombie

# Necessities
CXX := c++
CXXFLAGS := -Wall -Wextra -Werror -std=c++98

# Targets
SRC := main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

# Rules
all: $(NAME)

$(NAME): $(SRC)
	$(CXX) $(CXXFLAGS) -o $@  -I. $(SRC)

clean:
	rm -rf $(NAME)

re: clean all