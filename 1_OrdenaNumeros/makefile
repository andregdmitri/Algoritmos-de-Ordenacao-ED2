make clall: ordena.o main.o
	gcc -g ordena.o main.o -o ordena2 -std=c99 -Wall -pedantic-errors -lm
ordena.o:
	gcc -g -c ordena.c -o ordena.o
main:
	gcc -g -c main.c -o main.o
clean:
	rm *.o ordena2
run:
	./ordena2

