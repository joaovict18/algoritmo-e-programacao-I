/*
Construa um programa que receba a idade de um nadador como um número inteiro, o classifique em uma das categorias abaixo e imprima a sua classificação. - infantil A : 5 - 7 anos
- infantil B : 8 - 10 anos
- juvenil A : 11 - 13 anos
- juvenil B : 14 - 17 anos
- adulto : 18 anos ou mais
*/

#include <stdio.h>

int main() {

    int idade;

    scanf("%d", &idade);

    if (idade >= 5 && idade <= 7) {
        printf("Infatil A.\n");
    }  
    else if (idade >= 8 && idade <= 10) {
        printf("Infantil B.\n");
    }
    else if (idade >= 11 && idade <= 13) {
        printf("Juvenil A.\n");
    }
    else if (idade >= 14 && idade <= 17) {
        printf("Juvenil B.\n");
    } 
    else {
        printf("Adulto.\n");
    }

    return 0;
}