/*
Construa um programa que calcule o preço total a ser pago por uma quantidade x de um item. O programa deve considerar que o preço unitário do item é R$ 3,00 para compras abaixo de 5 unidades (isto é, se x < 5), e que este preço unitário cai para R$ 2,50 para compras iguais ou superiores a 5 unidades (isto é, se x ≥ 5);
*/

#include <stdio.h>

int main() {

    int qtd; 
    float precoUnitario;
;
    scanf("%d", &qtd);

    if (qtd < 5) {
        precoUnitario = 3.0;
    }
    else if (qtd >= 5) { // talvez somente else ficaria melhor, porém dessa forma fica mais explícito
        precoUnitario = 2.5;
    }

    printf("Preco final: R$%.1f.\n", precoUnitario * qtd);

    return 0;
}