/*
 * 2.4 - Aplicacao em Bioinformatica
 *
 * File:   ctrlf.h
 * André Guarnier De Mitri - 11395579
 * Rui Emanuel Lima Vieira - 11810182
 * Luiz Gustavo Cardoso e Silva - 12559527
 *
 */

#include "cont_leituras.h"

void ContagemLeituras(FILE* arquivo_genoma, FILE* arquivo_pos_genes, FILE* arquivo_fragmentos, FILE* arquivo_pos_fragmentos, long n_genes, long n_fragmentos, long tam_genoma, FILE* arquivo_saida) {
    CtrlF(arquivo_genoma, arquivo_fragmentos, arquivo_pos_fragmentos, tam_genoma);
    fclose(arquivo_pos_fragmentos);
    FILE* arquivo_pos_fragmentos2 = fopen("saida.txt", "r");
    ContagemIntersecoes(arquivo_pos_genes, arquivo_pos_fragmentos2, n_genes, n_fragmentos, arquivo_saida);
    fclose(arquivo_pos_fragmentos2);
    return;
}