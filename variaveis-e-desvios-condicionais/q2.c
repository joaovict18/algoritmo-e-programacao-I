/*
Construa um programa que receba dois números inteiros e imprima se eles são múltiplos - os números são múltiplos se eles forem divisíveis entre si,isto é, se o resto da divisão do maior pelo menor for igual a 0 (zero);
*/

#include <stdio.h>

int main() {

    int num1, num2;

    scanf("%d", &num1);
    scanf("%d", &num2);

    if (num1 > num2) {
        if (num1 % num2 == 0) {
            printf("SAO multiplos.\n");
        }
        else {
            printf("NAO SAO multiplos.\n");
        }
    }
    else {
        if (num2 % num1 == 0) {
            printf("SAO multiplos.\n");
        }
        else {
            printf("NAO SAO multiplos\n");
        }
    }

    return 0;
}