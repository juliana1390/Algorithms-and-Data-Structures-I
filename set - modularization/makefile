CC = gcc
CFLAGS = -Wall
program = set

set: main.c set.c
   $(CC) -o $(program) set.c main.c

run: set
    ./$(program)

clean:
	rm $(program)
