#include<stdio.h>
#include<stdlib.h>

struct car
{
    int quantPortas;
    char marca, modelo, cor, motorizacao;

}veiculo[10];

int main(void)
{
    int quantCarros, opcao;

    printf("Digite a quantidade de Carros presentes [MAX=10]\n");
    scanf("%i", &quantCarros);

    printf("1 -- ARMAZENAR DADOS\n");
    printf("2 -- MOSTRAR DADOS\n");

    printf("Digite sua opcao no Menu\n");
    scanf("%i", &opcao);

    switch (opcao)
    {
    case 1:
        printf("ARMAZENANDO DADOS\n");
        armazena(quantCarros);

        break;
    case 2:
        printf("MOSTRANDO DADOS\n");
        mostra(quantCarros);
        break;
    
    default: printf("Opcao invalida!\n");
        break;
    }

    return 0;
}
void armazena(int quant){
    for (int i = 0; i < quant; i++)
    {
        printf("Digite a Marca do carro: \n");
        scanf("%s", &veiculo[i].marca);

        printf("Digite o Modelo do carro: \n");
        scanf("%s", &veiculo[i].modelo);

        printf("Digite a Cor do carro: \n");
        scanf("%s", &veiculo[i].cor);

        printf("Digite qual a Motorizacao do carro: \n");
        scanf("%s", &veiculo[i].motorizacao);

        printf("Digite a quantidade de portas do carro: \n");
        scanf("%s", &veiculo[i].quantPortas);
    }
}

void mostra(int quant){
    for (int i = 0; i < quant; i++)
    {
        printf("Marca: %s\n", veiculo[i].marca);

        printf("Modelo: %s\n", veiculo[i].modelo);

        printf("Cor: %s\n", veiculo[i].cor);

        printf("Motorizacao: %s\n", veiculo[i].motorizacao);

        printf("Quantidade de Portas: %s\n", veiculo[i].quantPortas);


    }
}
