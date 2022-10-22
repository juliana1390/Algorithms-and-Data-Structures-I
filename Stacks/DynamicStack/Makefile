CC = gcc
CFLAGS = -Wall

main: DynamicStack.o main.c
	$(CC) -o main DynamicStack.o main.c

DynamicStack.o: DynamicStack.c DynamicStack.h
	$(CC) -c DynamicStack.c

clean:
	rm main $(objects)

run: main
    ./main