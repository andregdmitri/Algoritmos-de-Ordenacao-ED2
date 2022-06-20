/* 
 * 2.3 - Ctrl + F
 *
 * File:   main.c
 * André Guarnier De Mitri - 11395579
 * Rui Emanuel Lima Vieira - 11810182
 * Luiz Gustavo Cardoso e Silva - 12559527
 * 
 */

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "ctrlf2.h"

int main(int argc, char** argv) {
	  FILE* arquivo_texto, *arquivo_trechos, *arquivo_saida;
	  arquivo_texto = fopen("arquivo_texto.txt", "r");
	  arquivo_trechos = fopen("arquivo_trechos.txt", "r");
	  arquivo_saida = fopen("saida.txt", "w");
	  clock_t begin = clock();
	  CtrlF(arquivo_texto, arquivo_trechos, arquivo_saida);
    clock_t end = clock();
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
		printf("%f\n", time_spent);
	  fclose(arquivo_texto);
	  fclose(arquivo_trechos);
	  fclose(arquivo_saida);
	  return 0;
}