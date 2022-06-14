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
#include "intersecoes.h"

int main(int argc, char** argv) {
    FILE* arquivo_A, *arquivo_B, *arquivo_saida;
    long nA = 4, nB = 3; //Numero de linhas em A e B

    arquivo_A = fopen("A.txt", "r");
    arquivo_B = fopen("B.txt", "r");
    arquivo_saida = fopen("arquivo_saida.txt", "w");
    ContagemIntersecoes (arquivo_A, arquivo_B, nA, nB, arquivo_saida);
    fclose(arquivo_A);
    fclose(arquivo_B);
    fclose(arquivo_saida);
  return 0;
}