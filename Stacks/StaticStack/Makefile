CC = gcc
CFLAGS = -Wall

main: StaticStack.o main.c
	$(CC) -o main StaticStack.o main.c

StaticList.o: StaticStack.c StaticStack.h
	$(CC) -c StaticStack.c

clean:
	rm main $(objects)

run: main
    ./main