/*
Construa um programa que receba via teclado a medida dos catetos de um triângulo retânguloisósceles e o desenhe com o caractere asterisco (*). Por exemplo: para um triângulo retângulo isósceles cuja medida dos catetos é igual a 4, o triângulo retângulo isósceles a ser desenhado é:
*
* *
* * *
* * * *
*/

#include <stdio.h>

int main() {

    int cateto;

    scanf("%d", &cateto);

    for (int i = 0; i < cateto; i++) {
        for (int j = 0; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}