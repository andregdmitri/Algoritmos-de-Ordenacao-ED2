/*
 * 3.1.3 - Alternativa ao Ctrl + F
 *
 * File:   ctrlf2.c
 * André Guarnier De Mitri - 11395579
 * Rui Emanuel Lima Vieira - 11810182
 * Luiz Gustavo Cardoso e Silva - 12559527
 *
 */

#include "ctrlf2.h"
#define SIZE 1000000
#define CHAR 256 
//No caso do nosso código, CHAR pode ser mudado para apenas 4 - A, T, C e G

void badCharacterHeuristic (char *texto, long badchar[CHAR]){
	long i;
	for (i = 0; i < CHAR; i++){ 
		badchar[i] = -1;
	}
	
	for (i = 0; texto[i] != '\n'; i++){
    badchar[(int) texto[i]] = i;
	}
}
	

int max(int a, int b) { 
	return (a > b) ? a : b; 
}

void CtrlF(FILE* arquivo_texto, FILE* arquivo_trechos, FILE* arquivo_saida) {
	char letra;
  long i, j, p;
	long map[CHAR];
  char* texto = (char*)calloc(SIZE, sizeof(char));
  for (i = 0; (letra = fgetc(arquivo_texto)) != EOF; i++)
    texto[i] = letra;
  char* trecho = (char*)calloc(SIZE, sizeof(char));
	while (fgets(trecho, SIZE, arquivo_trechos) != NULL){
    for (i = 0; (texto[i] != '\n') ; i=i+p) {
			p = 0;
			for (j = 0; trecho[j] != '\n'; j++){
				badCharacterHeuristic (&trecho[j], map);
				if (texto[i + j] != trecho[j]){
					p = max(1, j-map[texto[i + j]]);
					break;
				}
			}
 			if (p == 0){
				fprintf(arquivo_saida, "%ld,%ld\n", i, i + j - 1);
				p++;
			}
    }
	}
	
	free(texto);
	free(trecho);
}
