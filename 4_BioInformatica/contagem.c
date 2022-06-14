/* 
 * 2.2 - Contagem de Intersecoes
 *
 * File:   contagem.c
 * André Guarnier De Mitri - 11395579
 * Rui Emanuel Lima Vieira - 11810182
 * Luiz Gustavo Cardoso e Silva - 12559527
 * 
 */

#include "contagem.h"

void ContagemIntersecoes (FILE* arquivo_A, FILE* arquivo_B, long nA, long nB, FILE* arquivo_saida) {
  long i, iA, iB, primeiro, primeiro_iB = 0;
  
  long **A = (long **) malloc (nA * (sizeof(long *)));
  for (i = 0; i < nA; i++)
    A[i] = (long *) malloc (2 * (sizeof(long*)));
  long **B =  malloc (nB * (sizeof(long *)));
  for (i = 0; i < nB; i++)
    B[i] = (long *) malloc (2 * (sizeof(long*)));
  
  long* contagens = (long *) calloc(nA, sizeof(long));
  for(i = 0; i <= nA-1; i++) {
    fscanf (arquivo_A, "%ld,%ld", &A[i][0], &A[i][1]);
  }

  for(i = 0; i <= nB-1; i++) {
    fscanf (arquivo_B, "%ld,%ld", &B[i][0], &B[i][1]);
  }
  
  OrdenaNumeros(A, nA);
  OrdenaNumeros(B, nB);
  
  for (iA = 0; iA <= nA-1; iA++) {
    for(iB = primeiro_iB; iB <= nB-1; iB++) {
      if (A[iA][1] < B[iB][0] || A[iA][0] > B[iB][1]) {
        if(contagens[iA] == 0) {
          primeiro_iB = iB;
        }
      }
      else {
        contagens[iA] = contagens[iA]+1;
      }
    }
  }
	
  for (i = 0; i < nA; i++) {
    fprintf(arquivo_saida, "%ld\n", contagens[i]);
  }

  //Liberando memória
  for (i = 0; i < nA; i++) {
    long* ptrAtual = A[i];
    free(ptrAtual);
  }
  free(A);

  for (i = 0; i < nB; i++) {
    long* ptrAtual = B[i];
    free(ptrAtual);
  }
  free(B);
  
  free(contagens);
	return;
}