all: ordena.o contagem.o main.o
	gcc -g ordena.o contagem.o main.o -o cont -std=c99 -Wall -pedantic-errors -lm
ordena.o:
	gcc -g -c ordena.c -o ordena.o
contagem.o:
	gcc -g -c contagem.c -o contagem.o
main:
	gcc -g -c main.c -o main.o
clean:
	rm *.o cont contagens.txt
run:
	./cont

