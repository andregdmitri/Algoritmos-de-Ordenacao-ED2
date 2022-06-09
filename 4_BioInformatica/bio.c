/*
 * 2.4 - Aplicacao em Bioinformatica
 *
 * File:   ctrlf.h
 * André Guarnier De Mitri - 11395579
 * Rui Emanuel Lima Vieira - 11810182
 * Luiz Gustavo Cardoso e Silva - 12559527
 * 
 */

#include "ordena.h"
#include "ctrlf.h"

void ContagemLeituras (FILE* arquivo_genoma, *FILE arquivo_pos_genes, *FILE arquivo_pos_fragmentos, int n_genes, int n_fragmentos) {
  CtrlF(arquivo_genoma, arquivo_fragmentos, arquivo_pos_fragmentos);
  ContagemIntersecoes(arquivo_pos_genes, arquivo_pos_fragmentos, n_genes, n_fragmentos);
  return;
}