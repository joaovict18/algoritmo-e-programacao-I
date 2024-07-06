/*
Construa um programa que calcule e imprima o enésimo elemento (an) de uma progressão aritmética, cujos primeiro termo (a1) e razão (r) sejam fornecidos via teclado como valores inteiros. O valor de n também deve ser fornecido via teclado. A equação que fornece o enésim oelemento (an) de uma progressão aritmética de primeiro termo a1 e razão r é an = a1 + (n-1).r;
*/

#include <stdio.h>

int main() {

    int primeiroTermo, razao, numeroDeTermos;

    scanf("%d", &primeiroTermo);
    scanf("%d", &razao);
    scanf("%d", &numeroDeTermos);

    printf("Enesimo elemento: %d.\n", primeiroTermo + (numeroDeTermos - 1) * razao);

    return 0;
}