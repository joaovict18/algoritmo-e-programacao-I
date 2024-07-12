/*
Construa um programa que receba via teclado a medida dos lados de um quadrado e o desenhecom o caractere asterisco (*). Por exemplo: para um quadrado cuja medida dos lados é igual a 4, o quadrado a ser desenhado é:
* * * *
* * * *
* * * *
* * * *
*/

#include <stdio.h>

int main() {

    int lado;

    scanf("%d", &lado);

    for (int i = 0; i < lado; i++) {
        for (int i = 0; i < lado; i++) {
            printf("# ");
        }
        printf("\n");
    } 

    return 0;
}