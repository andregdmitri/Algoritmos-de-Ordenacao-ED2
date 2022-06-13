all: ordena.o  contagem.o ctrlf.o bio.o main.o
	gcc -g ordena.o contagem.o ctrlf.o bio.o main.o -o bio -std=c99 -Wall -Wextra -pedantic-errors -lm
ordena.o:
	gcc -g -c ordena.c -o ordena.o
contagem.o:
	gcc -g -c contagem.c -o contagem.o
ctrlf.o:
	gcc -g -c ctrlf.c -o ctrlf.o
bio.o:
	gcc -g -c bio.c -o bio.o
main:
	gcc -g -c main.c -o main.o
clean:
	rm *.o bio saida1.txt arquivo_saida.txt
run:
	./bio

