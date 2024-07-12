/*
Construa um programa que imprima se um número inteiro fornecido via teclado é primo ou não- um número é primo se ele for maior que 1 e possuir apenas dois divisores - 1 (um) e ele próprio;
*/

#include <stdio.h>

int main() {

    int num;
    int ehPrimo = 1; // considera-se inicialmente que o número digitado é primo.

    scanf("%d", &num);

    if (num <= 1) {
        ehPrimo = 0;
    } else {
        for (int i = 2; i < num; i++) { // inicia-se em dois, pois todo número é divisível por 1, e termina-se antes do número em questão, pois todo número é divisível por ele mesmo.
            if (num % i == 0) {
                ehPrimo = 0;
                break;
            }
        }
    }

    if (ehPrimo) {
        printf("EH primo.\n");
    }
    else {
        printf("NAO eh primo.\n");
    }

    return 0;
}