/* 
 * 2.4 - Aplicacoes em Bioinformatica
 *
 * File:   main.c
 * André Guarnier De Mitri - 11395579
 * Rui Emanuel Lima Vieira - 11810182
 * Luiz Gustavo Cardoso e Silva - 12559527
 * 
 */

#include <stdlib.h>
#include <stdio.h>
#include "bio.h"

int main(int argc, char** argv) {
  FILE* arquivo_genoma, *arquivo_fragmentos, *arquivo_pos_genes, *arquivo_pos_fragmentos, *arquivo_saida;
  int n_genes = 100, n_fragmentos = 300;
  
  arquivo_genoma = fopen("genoma.txt", "r");
  arquivo_fragmentos = fopen("fragmentos.txt", "r");
  arquivo_pos_genes = fopen("pos_genes.csv", "r");
  arquivo_pos_fragmentos = fopen("saida1.txt", "w");
  arquivo_saida = fopen("arquivo_saida.txt", "w");
  
  ContagemLeituras (arquivo_genoma, arquivo_fragmentos, arquivo_pos_genes, arquivo_pos_fragmentos, n_genes, n_fragmentos, arquivo_saida);

  fclose(arquivo_genoma);
  fclose(arquivo_fragmentos);
  fclose(arquivo_pos_genes);
  fclose(arquivo_pos_fragmentos);
  fclose(arquivo_saida);
  return 0;
}