/*
 * 2.4 - Aplicacao em Bioinformatica
 *
 * File:   ctrlf.h
 * André Guarnier De Mitri - 11395579
 * Rui Emanuel Lima Vieira - 11810182
 * Luiz Gustavo Cardoso e Silva - 12559527
 *
 */
#include "ctrlf.h"
#include "intersecoes.h"

void ContagemLeituras(FILE* arquivo_genoma, FILE* arquivo_fragmentos, FILE* arquivo_pos_genes, FILE* arquivo_pos_fragmentos, long n_genes, long n_fragmentos, long tam_genoma, FILE* arquivo_saida);