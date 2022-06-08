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

void ContagemIntersecoes (FILE* arquivo_A, FILE* arquivo_B, int nA, int nB) {
  int i, primeiro_iB = 0;
  int inicio, fim,  iA, iB;
  
  int **A = (int **) malloc (nA * (sizeof(int *)));
  for (i = 0; i < nA; i++)
    A[i] = (int *) malloc (2 * (sizeof(int*)));
    int **B =  malloc (nB * (sizeof(int *)));
  
  for (i = 0; i < nB; i++)
    B[i] = (int *) malloc (2 * (sizeof(int*)));
  int* contagens = (int *) calloc(nA, sizeof(int));
  arquivo_A = fopen("A.txt", "r");//Inicio leitura A.txt
  if (arquivo_A == NULL)
    printf("Falha em abrir o arquivo\n");
  for(i = 0; i <= nA-1; i++) {
    fscanf (arquivo_A, "%d", &inicio);
    fscanf (arquivo_A, "%d", &fim);
    A[i][0] = inicio;
    A[i][1] = fim;
  }
  fclose(arquivo_A);//Fim leitura A.txt

  arquivo_B = fopen("B.txt", "r");//Inicio leitura B.txt
  if (arquivo_B == NULL)
    printf("Falha em abrir o arquivo\n");
  for(i = 0; i <= nB-1; i++) {
    fscanf (arquivo_B, "%d", &inicio);
    fscanf (arquivo_B, "%d", &fim);
    B[i][0] = inicio;
    B[i][1] = fim;
  }
  fclose(arquivo_B);//Fim leitura B.txt
  
  OrdenaNumeros(A, nA);
  OrdenaNumeros(B, nB);
	
  for (iA = 0; iA <= nA-1; iA++) {
    for(iB = primeiro_iB; iB <= nB-1; iB++) {
      if (A[iA][1] < B[iB][0] || A[iA][0] > B[iB][1]) {
        if(contagens[iA] == 0) {
          primeiro_iB = iB;
        }
        else {
          contagens[iA] = contagens[iA]+1;
        }
      }
    }
  }

	
  FILE* cont = fopen("contagens.txt","w");
  for (i = 0; i < nA; i++) {
    fprintf(cont, "%d\n", contagens[i]);
  }
  fclose(cont);

  //Liberando memória
  /*
  for(int i = 0; i < nA; i++)
    free(A[i]);
  free(A);
  for(int i = 0; i < nB; i++)
    free(B[i]);
  free(B);
  */
	return;
}