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
  FILE* arquivo_A;
  FILE* arquivo_B;
  int nA = 3, nB = 2;

  ContagemIntersecoes (arquivo_A, arquivo_B, nA, nB);
  return 0;
}