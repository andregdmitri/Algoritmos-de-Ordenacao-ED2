all: ordena.o  intersecoes.o ctrlf.o cont_leituras.o main.o
	gcc -g ordena.o intersecoes.o ctrlf.o cont_leituras.o main.o -o exec -std=c99 -Wall -Wextra -pedantic-errors -lm
ordena.o:
	gcc -g -c ordena.c -o ordena.o
intersecoes.o:
	gcc -g -c intersecoes.c -o intersecoes.o
ctrlf.o:
	gcc -g -c ctrlf.c -o ctrlf.o
cont_leituras.o:
	gcc -g -c cont_leituras.c -o cont_leituras.o
main:
	gcc -g -c main.c -o main.o
clean:
	rm *.o cont_leituras saida.txt arquivo_saida.txt
run:
	./exec