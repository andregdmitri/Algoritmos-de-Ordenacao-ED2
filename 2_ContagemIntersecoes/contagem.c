/* 
 * 2.2 - Contagem de Intersecoes
 *
 * File:   contagem.c
 * André Guarnier De Mitri - 11395579
 * Rui Emanuel Lima Vieira - 11810182
 * Luiz Gustavo Cardoso e Silva - 12559527
 * 
 */

#include <stdlib.h>
#include <stdio.h>
#include "ordena.h"

void contagem (int (*A)[2], int (*B)[2], int nA, int nB) {
  int A[nA][2];
  int B[nB][2];
  scanf(" %d", &nA);//Leitura da entrada de A
  for (i = 0; i <= nA-1; i++) {
    scanf (" %d %d", &A[i][0], &A[i][1]);
  }

  scanf(" %d", &nA);//Leitura da entrada de B
  for (i = 0; i <= nA-1; i++) {
    scanf (" %d %d", &A[i][0], &A[i][1]);
  }

  OrdenaNumeros(A, nA);
  OrdenaNumeros(A, nB);
}