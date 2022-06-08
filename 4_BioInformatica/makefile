all: ctrlf.o main.o
	gcc -g ctrlf.o main.o -o ctrlf -std=c99 -Wall -pedantic-errors -lm
ctrlf.o:
	gcc -g -c ctrlf.c -o ctrlf.o
main:
	gcc -g -c main.c -o main.o
clean:
	rm *.o ctrlf saida.txt
run:
	./ctrlf