/*
Construa um programa que calcule os n primeiros múltiplos de um número fornecido via teclado;
*/

#include <stdio.h>

int main() {

    int n;
    
    scanf("%d", &n);

    for (int i = 0; i <= n; i++) {
        if (i == n) {
            printf("%d.\n", n * i);
        }
        else {
            printf("%d.. ", n * i);
        }
    }

    return 0;
}