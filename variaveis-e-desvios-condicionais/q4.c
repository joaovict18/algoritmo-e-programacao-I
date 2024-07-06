/* 
Construa um programa que receba a medida de três lados de um triângulo (como números inteiros) e imprima: 
a) Se estes lados de fato formam um triângulo - em um triângulo, cada um dos lados é menor do que a soma dos outros dois;
b) Admitindo-se que eles de fato formam um triângulo, qual é o tipo deste triângulo - um triângulo equilátero possui todos os seus três lados iguais, um triângulo isósceles possui apenas dois dos seus lados iguais e um triângulo escaleno possui os seus três lados diferentes.
*/

#include <stdio.h>

int main() {

    int lado1, lado2, lado3;

    scanf("%d", &lado1);
    scanf("%d", &lado2);
    scanf("%d", &lado3);

    if ((lado1 + lado2 > lado3) && (lado1 + lado3 > lado2) && (lado2 + lado3 > lado1)) { // Verifica se é triângulo
        printf("Os lados digitados formam triangulo.\n");

        if ((lado1 == lado2) && (lado2 == lado3) && (lado1 == lado3)) { // Verifica se é equilátero
            printf("O triangulo eh EQUILATERO.\n");
        }
        else if (((lado1 == lado2) && (lado2 != lado3 || lado1 != lado3)) || ((lado2 == lado3) && (lado2 != lado1 || lado3 != lado1)) || ((lado1 == lado3) && (lado1 != lado2) || lado3 != lado2)) { // Verifica se é isósceles (lógica um pouco "longa", porém simples)
            printf("O triangulo eh ISOSCELES.\n");
        }
        else { // Se nenhuma das acima valer, só resta ser escaleno
            printf("O triangulo eh ESCALENO.\n");
        }
    }
    else {
        printf("Os lados digitados nao formam triangulo.\n");
    }

    return 0;
}