CC = gcc
CFLAGS = -Wall

main: StaticList.o main.c
	$(CC) -o main StaticList.o main.c

StaticList.o: StaticList.c StaticList.h
	$(CC) -c StaticList.c

clean:
	rm main $(objects)

run: main
    ./main
