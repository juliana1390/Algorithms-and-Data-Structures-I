CC = gcc
CFLAGS = -Wall

main: DynamicList.o main.c
	$(CC) -o main DynamicList.o main.c

StaticList.o: DynamicList.c DynamicList.h
	$(CC) -c DynamicList.c

clean:
	rm main $(objects)

run: main
    ./main
