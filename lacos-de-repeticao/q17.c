/*
Construa um programa que imprima todos os divisores de um número inteiro fornecido via teclado - em particular, um número x é divisor de um número y quando o resto da divisão de y por x for igual a 0 (zero);
*/

#include <stdio.h>

int main() {

    int num, i = 1; // i necessariamente precisa iniciar em 1, visto que se iniciasse com 0, na condição logo abaixo, iria efetuar-se uma divisão por zero, sendo isto um absurdo.

    printf("Insira um numero para ver seus divisores: ");
    scanf("%d", &num);

    while (i <= num) {

        if (num % i == 0) {
            printf("%d eh divisor.\n", i);
        }

        i++;
    }

    return 0;
}