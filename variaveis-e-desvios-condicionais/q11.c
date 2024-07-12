/*
Construa um programa que receba via teclado o preço de um produto, em reais, e a forma depagamento (a vista ou a prazo, dividido em 6 vezes sem juros). Se o pagamento for a vista, o algoritmo deve imprimir na tela o preço final aplicando um desconto de 15% no preço recebido via teclado. Se o pagamento for a prazo, o algoritmo deve imprimir o valor de cada uma das parcelas com base no preço fornecido via teclado
*/

#include <stdio.h>

int main() {

    float preco;
    int escolha;

    printf("Preco: R$");
    scanf("%f", &preco);

    printf("Escolha a forma de pagamento:\n");
    printf("[ 1 ] A vista\n");
    printf("[ 2 ] A prazo, dividido em 6 vezes sem juros.\n");
    scanf("%d", &escolha);

    switch(escolha) {
        
        case 1:
            preco *= 0.85;
            printf("O preco final sera de R$%.2f", preco);
            break;
        
        case 2:
            preco /= 6;
            printf("O valor de cada parcela sera de R$%.2f", preco);
            break;
            
        default:
            printf("Escolha invalida.\n");
            break;
    }

    return 0;
}