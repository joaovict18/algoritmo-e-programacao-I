/*
Construa um programa que, dada a posição inicial s0 de um objeto se movendo com velocidade constante v, calcule e imprima a sua posição s em um dado instante de tempo t - considerecomo sendo fornecidos via teclado os valores inteiros de s0, v e t. A equação que fornece aposição s de um objeto se movendo com velocidade constante v a partir de uma posição inicial s0 é s = s0 + v.t;
*/

#include <stdio.h>

int main() {

    int s0, v, t, s;

    printf("Posicao inicial: ");
    scanf("%d", &s0);
    printf("Velocidade: ");
    scanf("%d", &v);
    printf("Tempo: ");
    scanf("%d", &t);

    s = s0 + v * t;

    printf("A posicao final do objeto eh %d.\n", s);
}