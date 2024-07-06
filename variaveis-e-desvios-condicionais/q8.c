/*
Construa um programa que receba o gênero de uma pessoa como uma variável do tipo caractere - mais precisamente, “M” para masculino e “F” para feminino. A partir daí, o programadeve receber a altura da pessoa como uma variável do tipo real e calcular seu suposto peso ideal de acordo com as equações abaixo:
- para o gênero masculino: peso ideal = (72,7 x altura) - 58
- para o gênero feminino: peso ideal = (62,1 x altura) - 44,7
Por fim, o programa deve exibir em tela o peso ideal calculado. Caso o usuário tenha informado um valor inválido para o gênero, o programa deve informá-lo acerca disto e não realizar nenhum cálculo de peso ideal.
*/

#include <stdio.h>

int main() {

    char sexo;
    float altura;

    printf("Sexo (M/F): ");
    scanf(" %c", &sexo);

    if (sexo != 'M' && sexo != 'F') { // não funciona com OU, visto que ainda que o usuário entre com qualquer charactere exceto M ou F, ou ainda que seja um dos dois, o if sempre será verdadeiro, independente, sendo assim necessário o uso do E
        printf("Sexo invalido.\n");
    }
    else {
        printf("Altura (1.70): ");
        scanf("%f", &altura);

        if (sexo == 'M') {
            printf("Seu peso ideal eh de %.1f.\n", (72.7 * altura) - 58);
        }
        else { // não é preciso ser feito um else if aqui, visto que a verificação se o sexo é masculino ou feminino foi feita na primeira condicional, e aqui, não sendo do sexo masculino, só resta ser feminino
            printf("Seu peso ideal eh de %.1f.\n", (62.1 * altura) - 44.7);
        }
    }

    return 0;
}