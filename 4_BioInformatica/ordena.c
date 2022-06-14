/*
 * 2.1 - Impelmentacao OrdenaNumeros
 *
 * File:   ordena.c
 * André Guarnier De Mitri - 11395579
 * Rui Emanuel Lima Vieira - 11810182
 * Luiz Gustavo Cardoso e Silva - 12559527
 *
 */

#include "ordena.h"

void OrdenaDigitos(long(**A), long n, long posicao) {
    long* B = calloc(10, sizeof(long));
    long i, digito;
    for (i = 0; i <= n - 1; i++) {
        digito = A[i][0] / posicao;
        digito = digito % 10;
        B[digito] = B[digito] + 1;
    }

    for (i = 1; i <= 9; i++)
        B[i] = B[i] + B[i - 1];

    long** C = (long**)malloc(n * (sizeof(long*)));
    for (i = 0; i < n; i++)
        C[i] = (long*)malloc(2 * (sizeof(long*)));

    for (i = n - 1; i >= 0; i--) {
        digito = A[i][0] / posicao;
        digito = digito % 10;
        B[digito] = B[digito] - 1;
        C[B[digito]][0] = A[i][0];
        C[B[digito]][1] = A[i][1];
    }
    for (i = 0; i <= n - 1; i++) {
        A[i][0] = C[i][0];
        A[i][1] = C[i][1];
    }

    // Liberando memoria
    free(B);
    for (i = 0; i < n; i++) {
        long* ptrAtual = C[i];
        free(ptrAtual);
    }
    free(C);
    return;
}

void OrdenaNumeros(long(**A), long n) {
    long maior = A[0][0], posicao = 1, i = 0;

    for (i = 0; i < n; i++)
        if (maior < A[i][0])
            maior = A[i][0];

    while ((maior / posicao) > 0) {
        OrdenaDigitos(A, n, posicao);
        posicao = posicao * 10;
    }
    return;
}