/*
 * 2.1 - Impelmentacao OrdenaNumeros
 *
 * File:   ordena.c
 * André Guarnier De Mitri - 11395579
 * Rui Emanuel Lima Vieira - 11810182
 * Luiz Gustavo Cardoso e Silva - 12559527
 * 
 */

#include "ordena.h"

void OrdenaDigitos(int (*A)[2], int n, int posicao) {
    int B[10];
    int digito, i;
    for (i = 0; i < 10; i++)
        B[i] = 0;
  
    for (i = 0; i <= n-1; i++) {
      digito = A[i][0]/posicao;
      digito = digito%10;
      B[digito] = B[digito] + 1;
    }

    for (i = 1; i <= 9; i++)
      B[i] = B[i] + B[i-1];
  
    int C[n][2];
    for (i = n-1; i >= 0; i--) {
      digito = A[i][0]/posicao;
      digito = digito%10;
      B[digito] = B[digito] - 1;
      C[B[digito]][0] = A[i][0];
      C[B[digito]][1] = A[i][1];;
    }
    for (i = 0; i <= n-1; i++) {
      A[i][0] = C[i][0];
      A[i][1] = C[i][1];
    }
  return;
}

void OrdenaNumeros(int (*A)[2], int n) {
  int maior = A[0][0];
  int posicao = 1;
  
  for (int i = 0; i < n; i++)
    if (maior < A[i][0])
       maior = A[i][0];
  
  while((maior/posicao) > 0) {
    OrdenaDigitos(A, n, posicao);
    posicao = posicao*10;
  }
  return;
}