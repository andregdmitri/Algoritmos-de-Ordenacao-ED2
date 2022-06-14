all: ordena.o intersecoes.o main.o
	gcc -g ordena.o intersecoes.o main.o -o exec -std=c99 -Wall -pedantic-errors -lm
ordena.o:
	gcc -g -c ordena.c -o ordena.o
intersecoes.o:
	gcc -g -c intersecoes.c -o intersecoes.o
main:
	gcc -g -c main.c -o main.o
clean:
	rm *.o exec arquivo_saida.txt
run:
	./exec