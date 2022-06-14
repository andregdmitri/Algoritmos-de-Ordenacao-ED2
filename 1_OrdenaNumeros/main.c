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
  long n, i = 0;
  
  //Inicio leitura A.txt
  FILE* arquivo_A = fopen("A.txt", "r");
  fscanf (arquivo_A, "%ld", &n); //Tamanho da matrix

  //Alocando matrix A
  long **A = (long **)malloc(n * sizeof(long*));
  for(long i = 0; i < n; i++) 
    A[i] = (long *) malloc (2 * (sizeof(long*)));

  //Leitura dos dados da Matrix A
  for(i = 0; i < n; i++) {
    fscanf (arquivo_A, "%ld", &A[i][0]);
    fscanf (arquivo_A, "%ld", &A[i][1]);
  }
  fclose(arquivo_A);

  OrdenaNumeros(A, n);

  //Print do resultado final
  FILE* arquivo_saida = fopen("arquivo_saida.txt", "w");
  for (long i = 0; i < n; i++) {
    for (long j = 0; j < 2; j++) {
      fprintf(arquivo_saida, "%ld ", A[i][j]);
    }
    fputs("\n", arquivo_saida);
  }
  fclose(arquivo_saida);
  for (i = 0; i < n; i++) {
    long* ptrAtual = A[i];
    free(ptrAtual);
  }
  free(A);
  return 0;
}