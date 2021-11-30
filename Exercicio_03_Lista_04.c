#include<stdio.h>
#include<stdlib.h>

struct restaurante
{
    char nome[30], endereco[30], tipoComida[30];
    float preco;
};
//delcarando funcoes
void cadastraDados(int quantRes, struct restaurante *res);
void mostrarDados(int quantRes, struct restaurante *res);

int main(void)
{
    fflush(stdin);
    int quantRes, opcao;
    struct restaurante res[quantRes];

    printf("Digite a quantidade de Restaurantes que serao cadastrados:\n");
    scanf("%i", &quantRes);
    cadastraDados(quantRes, res);
    printf("Digite [0] para mostrar os dados ou [1] para sair do Programa:\n");
    scanf("%i", &opcao);
    if (opcao==0)
    {
        mostrarDados(quantRes, res);
    } else 

    return 0;
}
void cadastraDados(int quantRes, struct restaurante *res){

    for (int i = 0; i < quantRes; i++)
    {
        printf("ESTABELECIMENTO NUMERO [%i]\n",i+1);
        fflush(stdin);
        printf("Digite o [NOME] do Estabelecimento:\n");
        scanf("%s", &res[i].nome);
        printf("Digite o [ENDERECO] do Estabelecimento:\n");
        scanf("%s", &res[i].endereco);
        printf("Digite o [TIPO DE COMIDA] fornecida pelo Estabelecimento:\n");
        scanf("%s", &res[i].tipoComida);
        printf("Digite o [PRECO MEDIO] do Estabelecimento:\n");
        scanf("%f", &res[i].preco);
        fflush(stdin);
    }
    
}
void mostrarDados(int quantRes, struct restaurante *res){

    for (int i = 0; i < quantRes; i++)
    {
        printf("ESTABELECIMENTO NUMERO [%i]\n",i+1);
        printf("NOME = [%s]\n", res[i].nome);
        printf("ENDERECO = [%s]\n", res[i].endereco);
        printf("TIPO DE COMIDA = [%s]\n", res[i].tipoComida);
        printf("PRECO MEDIO = [%f]\n", res[i].preco);
    }
    
}
