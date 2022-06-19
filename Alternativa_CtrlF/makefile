all: ctrlf.o main.o
	gcc -g ctrlf.o main.o -o ctrlf -std=c99 -Wall -pedantic-errors -lm
ctrlf.o:
	gcc -g -c ctrlf2.c -o ctrlf.o
main:
	gcc -g -c main.c -o main.o
clean:
	rm *.o ctrlf saida.txt vgcore.*
valgrind:
	valgrind --leak-check=full --track-origins=yes  ./ctrlf
run:
	./ctrlf