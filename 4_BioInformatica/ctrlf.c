/*
 * 2.3 - Impelmentacao CTRLF
 *
 * File:   ctrlf.c
 * André Guarnier De Mitri - 11395579
 * Rui Emanuel Lima Vieira - 11810182
 * Luiz Gustavo Cardoso e Silva - 12559527
 * 
 */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "ctrlf.h"

void CtrlF (FILE* arquivo_texto, FILE* arquivo_trechos, FILE* arquivo_saida) {
  char letra;
  int i, j;
  char* texto = (char *) calloc(12000, sizeof(char));
  for (i = 0; (letra = fgetc(arquivo_texto)) != EOF; i++)
    texto[i] = letra;
  char* trecho = (char *) calloc(12000, sizeof(char));
  
  while (fgets(trecho, 12000, arquivo_trechos) != NULL) {
		for (i = 0; texto[i] != '\n'; i++) {
			for (j = 0; (trecho[j] != '\n') && (texto[i + j] == trecho[j]); j++);
      if (trecho[j] == '\n') {
				fprintf(arquivo_saida, "%d, %d\n", i, i+j-1);
				break;
			}
		}
	};
  free(texto);
  free(trecho);
  return;
}