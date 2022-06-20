/*
 * 2.4 - Aplicacoes em Bioinformatica
 *
 * File:   main.c
 * André Guarnier De Mitri - 11395579
 * Rui Emanuel Lima Vieira - 11810182
 * Luiz Gustavo Cardoso e Silva - 12559527
 *
 */

#include "cont_leituras.h"
#include <stdio.h>
#include <stdlib.h>
//#include <time.h>

int main(int argc, char** argv) {
    FILE *arquivo_genoma, *arquivo_pos_genes, *arquivo_fragmentos, *arquivo_pos_fragmentos, *arquivo_saida;
    long n_genes = 10000, n_fragmentos = 30000, tam_genoma = 1000000;

    arquivo_genoma = fopen("dados/genoma_grande.txt", "r");
    arquivo_pos_genes = fopen("dados/pos_genes_grande.csv", "r");
    arquivo_fragmentos = fopen("dados/fragmentos_grande.txt", "r");
    arquivo_pos_fragmentos = fopen("pos_frag2.txt", "w");
    arquivo_saida = fopen("arquivo_saida.txt", "w");
    //clock_t begin = clock();
    ContagemLeituras(arquivo_genoma, arquivo_pos_genes, arquivo_fragmentos, arquivo_pos_fragmentos, n_genes, n_fragmentos, tam_genoma, arquivo_saida);
    //clock_t end = clock();
    //double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    //printf("%f\n", time_spent);
    fclose(arquivo_genoma);
    fclose(arquivo_fragmentos);
    fclose(arquivo_pos_genes);
    fclose(arquivo_saida);
    return 0;
}