#include<stdio.h>
#include<stdlib.h>

struct alimentacao
{
    float peso, numCalorias;
    char nomeComida[30];
};

void mostraDados(int quantP, struct alimentacao *dieta);
void gravarDados(int quantP, struct alimentacao *dieta);

int main(void)
{
    int quantPessoas;
    char opcao;
    struct alimentacao dieta[quantPessoas];

    printf("Digite a quantidade de pessoas que participarao da dieta:\n");
    scanf("%i", &quantPessoas);
    gravarDados(quantPessoas, dieta);
    printf("Deseja mostrar os dados em uma tela limpa?[S/N]\n");
    fflush(stdin);
    scanf("%c", &opcao);
    if (opcao== 'S' || opcao== 's')
    {
        mostraDados(quantPessoas, dieta);
    } else
    
    return 0;
}
void gravarDados(int quantP, struct alimentacao *dieta){

    for (int i = 0; i < quantP; i++)
    {
        printf("\t\t[PRATO NUMERO [%i]\n", i);
        printf("Digite o nome da Comida:\n");
        scanf("%s", &dieta[i].nomeComida);
        printf("Digite o numero de calorias contidas na comida:\n");
        scanf("%f", &dieta[i].numCalorias);
        printf("Digite o peso do seu prato:\n");
        scanf("%f", &dieta[i].peso);
    }
}
void mostraDados(int quantP, struct alimentacao *dieta){

    for (int i = 0; i < quantP; i++)
    {
        printf("\t\t[PRATO NUMERO [%i]\n", i);
        printf("Nome da Comida:[%s]\n", dieta[i].nomeComida);
        printf("Calorias:[%f]\n", dieta[i].numCalorias);
        printf("Peso do Prato:[%f]\n", dieta[i].peso);
    }
}
