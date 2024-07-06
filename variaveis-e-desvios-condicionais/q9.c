/*
Considere que uma loja de produtos esportivos venda os seguintes ítens :
Código do produto   Descrição do produto    Preço de produto
1001                Sunga                   100,00
1002                Maiô                    200,00
1003                Óculos                  110,00
1004                Touca                   50,00
1005                Nadadeiras              130,00
Construa um programa no qual o usuário entre via teclado com o código do produto e seja exibida na tela uma mensagem com a sua descrição e preço. Caso o usuário tenha digitado um código inválido, a mensagem “Produto não cadastrado” deverá ser impressa na tela.
*/

#include <stdio.h>

int main() {

    int codigo;

    printf("Digite o codigo: ");
    scanf("%d", &codigo);

    if (codigo == 1001) {
        printf("Descricao: Sunga\tPreco: R$100,00.\n");
    }
    else if (codigo == 1002) {
        printf("Descricao: Maio\tPreco: R$200,00.\n"); // na última vez executado, o \t não estava dando o espaçamento adequado
    }
    else if (codigo == 1003) {
        printf("Descricao: Oculos\tPreco: R$110,00.\n");
    }
    else if (codigo == 1004) {
        printf("Descricao: Touca\tPreco: R$50,00.\n");
    }
    else if (codigo == 1005) {
        printf("Descricao: Nadadeiras\tPreco: 130,00.\n");
    }
    else {
        printf("Produto nao cadastrado.\n");
    }

    return 0;
}