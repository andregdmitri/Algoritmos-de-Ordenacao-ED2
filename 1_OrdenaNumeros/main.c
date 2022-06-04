/* 
 * 2.1 - Impelmentacao OrdenaNumeros
 *
 * File:   main.c
 * André Guarnier De Mitri - 11395579
 * Rui Emanuel Lima Vieira - 11810182
 * Luiz Gustavo Cardoso e Silva - 12559527
 * 
 */

#include <stdlib.h>
#include <stdio.h>
#include "ordena.h"

int main(int argc, char** argv) {
  int n, i = 0;
  
  //****************************************************************************************
  //Leitura da entrada
  scanf(" %d", &n);
  int A[n][2];
  for (i = 0; i < n; i++) {
    scanf (" %d %d", &A[i][0], &A[i][1]);
  }
  //*****************************************************************************************

  OrdenaNumeros(A, n);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 2; j++) {
      printf("%d ", A[i][j]);
    }
    printf("\n");
  }
  return 0;
}