CC = gcc
CFLAGS = -Wall -g

sources = main.c getch.c  getop.c stack.c calc.h
objects = $(sources:%.c=%.o)

mian: main.o $(objects)
	$(CC) $(CFLAGS) -o main $(objects)

%.o: %.c
	$(CC) $(CFLAGS) -c $<

.PHONY: clean

clean:
	rm -f main $(objects)
