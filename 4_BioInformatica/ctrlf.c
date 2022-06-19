/*
 * 2.3 - Impelmentacao CTRLF
 *
 * File:   ctrlf.c
 * André Guarnier De Mitri - 11395579
 * Rui Emanuel Lima Vieira - 11810182
 * Luiz Gustavo Cardoso e Silva - 12559527
 *
 */
#include "ctrlf.h"

void CtrlF(FILE* arquivo_texto, FILE* arquivo_trechos, FILE* arquivo_saida, long tam_genoma) {
    char letra;
    long i, j;
    char* texto = (char*)calloc(tam_genoma, sizeof(char));
    for (i = 0; (letra = fgetc(arquivo_texto)) != EOF; i++)
        texto[i] = letra;
    char* trecho = (char*)calloc(tam_genoma, sizeof(char));
    while (fgets(trecho, tam_genoma, arquivo_trechos) != NULL) {
        for (i = 0; texto[i] != '\n'; i++) {
            for (j = 0; (trecho[j] != '\n') && (texto[i + j] == trecho[j]); j++)
                ;
            if (trecho[j] == '\n') {
                fprintf(arquivo_saida, "%ld,%ld\n", i, i + j - 1);
                break;
            }
        }
    }
    free(texto);
    free(trecho);
    return;
}