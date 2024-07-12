/*
Construa um programa que calcule e imprima, a partir de uma sequência de números fornecida via teclado, quantos daqueles números são pares. Suponha que cada número seja fornecido por vez;
*/

#include <stdio.h>

int main() {

    int numero, qtdDeNumeros = 0, numeroDePares = 0;

    printf("Digite 5 numeros para ver quantos sao pares:\n");

    do {

        scanf("%d", &numero);

        if (numero % 2 == 0) {
            numeroDePares++;
        }

        qtdDeNumeros++;
    } 
    while(qtdDeNumeros < 5);

    printf("A quantidde de numeros pares eh %d.\n", numeroDePares);

    return 0;
}
// da mesma forma que no anterior, este também pode ser adaptado para ser inseridos quantos números o usuário quiser.