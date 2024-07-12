/*
Construa um programa que imprima a sequência de números inteiros cujos limites inferior e superior sejam fornecidos pelo teclado;
*/

#include <stdio.h>

int main() {

    int limiteInferior, limiteSuperior;

    printf("Limite inferior: ");
    scanf("%d", &limiteInferior);
    printf("Limite superior: ");
    scanf("%d", &limiteSuperior);

    for (int i = limiteInferior; i <= limiteSuperior; i++) {
        if (i == limiteSuperior) {
            printf("%d.", i);
        }
        else {
            printf("%d.. ", i);
        }
    }

    return 0;
}