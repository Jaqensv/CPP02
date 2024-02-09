NAME = main
SOURCES = main.cpp Fixed.class.cpp

OBJECTS = $(SOURCES:.cpp=.o)

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

all: ${NAME}

%.o: %.c++
	$(CC) -c $(CFLAGS) -g3 $< -o $@ -I

${NAME}: ${OBJECTS}
	$(CC) $(CFLAGS) -g3 -o ${NAME} ${OBJECTS}

clean:
	rm -f ${OBJECTS}
	
fclean: clean
	rm -f ${NAME}

re: fclean all