/*
Construa um programa que calcule o preço total a ser pago por uma quantidade x de um item. O preço unitário do item é R$ 3,00 e o programa deve considerar que, a cada dois itens, o consumidor pagará por apenas um (trata-se da famosa promoção LEVE DOIS, PAGUE UM);
*/

#include <stdio.h>

int main() {

    int qtd;
    float precoUnitario = 3.0, precoPorPar, precoPorResto;

    scanf("%d", &qtd);
    
    precoPorPar = qtd / 2;
    precoPorResto = qtd % 2;

    printf("O total a se pagar eh de R$%.2f", (precoPorPar + precoPorResto) * 3);

    return 0;
}