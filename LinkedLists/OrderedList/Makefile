CC = gcc
CFLAGS = -Wall

main: OrderedList.o main.c
	$(CC) -o main OrderedList.o main.c

StaticList.o: OrderedList.c OrderedList.h
	$(CC) -c OrderedList.c

clean:
	rm main $(objects)

run: main
    ./main