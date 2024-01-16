CC = gcc
CFLAGS = -Wall

all: main

main: main.c primo.c
	$(CC) $(CFLAGS) -o main main.c primo.c -I.

clean:
	rm -f main
