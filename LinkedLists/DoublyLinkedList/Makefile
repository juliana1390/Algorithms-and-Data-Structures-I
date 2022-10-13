CC = gcc
CFLAGS = -Wall

main: DoublyLinkedList.o main.c
	$(CC) -o main DoublyLinkedList.o main.c

StaticList.o: DoublyLinkedList.c DoublyLinkedList.h
	$(CC) -c DoublyLinkedList.c

clean:
	rm main $(objects)

run: main
    ./main