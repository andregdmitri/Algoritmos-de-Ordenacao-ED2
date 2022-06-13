/* 
 * 2.2 - Contagem de Intersecoes
 *
 * File:   main.c
 * André Guarnier De Mitri - 11395579
 * Rui Emanuel Lima Vieira - 11810182
 * Luiz Gustavo Cardoso e Silva - 12559527
 * 
 */
#include <stdio.h>
#include <stdlib.h>
#include "contagem.h"

int main(int argc, char** argv) {
  FILE* arquivo_A, *arquivo_B, *arquivo_saida;
  int nA = 3, nB = 2;

  arquivo_A = fopen("A.txt", "r");
  arquivo_B = fopen("B.txt", "r");
  arquivo_saida = fopen("contagens.txt", "w");
  ContagemIntersecoes (arquivo_A, arquivo_B, nA, nB, arquivo_saida);
  fclose(arquivo_A);
  fclose(arquivo_B);
  fclose(arquivo_saida);
  return 0;
}