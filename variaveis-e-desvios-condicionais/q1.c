/*
Construa um programa que receba um número inteiro e imprima se ele é par ou ímpar - um número é par se ele for divisível por 2, isto é, se o resto da sua divisão por 2 for igual a 0 (zero);
*/

#include <stdio.h>

int main() {

    int num;

    scanf("%d", &num);

    if (num % 2 == 0) {
        
        printf("PAR.\n");
    } 
    else {
        printf("IMPAR.\n");
    }

    return 0;
}