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

void CtrlF (FILE* arquivo_texto, FILE* arquivo_trechos, FILE* arquivo saida) {
  char letra;
  int i, j;
  char* texto = (char *) malloc(sizeof(char) * 1024);
  arquivo_texto = fopen("arquivo_texto.txt", "r");
  for (i = 0; (letra = fgetc(arquivo_texto)) != EOF; i++)
    texto[i] = letra;
  fclose(arquivo_texto);
  arquivo_trechos = fopen("arquivo_trechos.txt","r");
	FILE* arquivo_saida = fopen("saida.txt","w");
  char* trecho = (char *) malloc(sizeof(char) * 1024);
  
  while (fgets(trecho, 1024, arquivo_trechos) != NULL) {
		for (i = 0; texto[i] != '\n'; i++) {
			for (j = 0; (trecho[j] != '\n') && (texto[i + j] == trecho[j]); j++);
      if (trecho[j] == '\n') {
				fprintf(arquivo_saida, "%d, %d\n", i, i+j-1);
				break;
			}
		}
	};
  fclose (arquivo_saida);
  return;
}
/*
Feedback:
- Dando fopen na main ao inves de aqui (depois vamos usar só o ctrlf.c e não ia funcionar)
- Lendo string e atribuindo usando &texto e era só texto
- Dando fopen na main e tambem nessa função (Seg. Fault)
- Fim da string == '%\n' e não EOF
*/