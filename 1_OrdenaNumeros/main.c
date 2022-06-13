/* 
 * 2.1 - Impelmentacao OrdenaNumeros
 *
 * File:   main.c
 * André Guarnier De Mitri - 11395579
 * Rui Emanuel Lima Vieira - 11810182
 * Luiz Gustavo Cardoso e Silva - 12559527
 * 
 */

#include "ordena.h"

int main(int argc, char** argv) {
  int n, i = 0;
  
  //Inicio leitura A.txt
  FILE* arquivo_A = fopen("A.txt", "r");
  fscanf (arquivo_A, "%d", &n); //Tamanho da matrix

  //Alocando matrix A
  int **A = (int **)malloc(n * sizeof(int*));
  for(int i = 0; i < n; i++) 
    A[i] = (int *) malloc (2 * (sizeof(int*)));

  //Leitura dos dados da Matrix A
  for(i = 0; i < n; i++) {
    fscanf (arquivo_A, "%d", &A[i][0]);
    fscanf (arquivo_A, "%d", &A[i][1]);
  }
  fclose(arquivo_A);

  OrdenaNumeros(A, n);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 2; j++) {
      printf("%d ", A[i][j]);
    }
    printf("\n");
  }
  for (int i = 0; i < n; i++) {
    int* ptrAtual = A[i];
    free(ptrAtual);
  }
  free(A);
  return 0;
}