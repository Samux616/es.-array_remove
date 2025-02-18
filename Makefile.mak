all: main

clean: main main.o array.o
		rm main main.o array.o
main: main.o array.o
		gcc -g -o main main.o array.o

main.o: main.c array.h
		gcc -g -c -o main.o main.c

array.o: array.c array.h
		gcc -g -c -o array.o array.c