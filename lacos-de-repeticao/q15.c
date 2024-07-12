/*
Construa um programa que calcule e imprima, a partir de uma sequência de números fornecida via teclado, a média aritmética de todos eles. Suponha que cada número seja fornecido por vez;
*/

#include <stdio.h>

int main() {

    float numero, soma = 0.0;
    int qtdDeNumeros = 0;

    printf("Digite 5 numeros para ver sua media:\n");

    do {
        scanf("%f", &numero);

        soma += numero;
        qtdDeNumeros++;
    } 
    while(qtdDeNumeros < 5);

    printf("A media dos numeros digitados eh %.1f.\n", soma / qtdDeNumeros);

    return 0;
}

// pode ser personalizado depois para funcionar com uma flag, assumindo podendo ser a média de quantos números o usuário quiser.