#include<stdio.h>
#include<string.h>

struct placs
{
    int finalPlaca;
    char comecoPlaca[5];
};

struct car
{
    char dono[30], modelo[30], cor[10];
    int Numchassi, ano;
    char combustivel[30];
    struct placs placa;
};

void funcaoB(int quant, struct car *carro);
void funcaoA(int quant, struct car *carro);

int main(void)
{
    int quantCarros;
    struct car carro[quantCarros];

    printf("Digite quantos carros estao presentes na pesquisa: \n");
    scanf("%i", &quantCarros);
    fflush(stdin);

    for (int i = 0; i < quantCarros; i++)
    {
        printf("[CADASTRANDO CARRO NUMERO [%i]\n", i);
        printf("------------------------------\n");
        printf("Digite o nome do Proprietario do carro: \n");
        scanf("%s", &carro[i].dono);
        printf("------------------------------\n");
        printf("Digite o modelo do carro: \n");
        scanf("%s", &carro[i].modelo);
        printf("------------------------------\n");
        printf("Digite o Numero do Chassi do carro: \n");
        scanf("%s", &carro[i].Numchassi);
        printf("------------------------------\n");
        printf("Digite o Ano de fabricacao do carro:\n");
        scanf("%s", &carro[i].ano);
        printf("------------------------------\n");
        printf("Digite o Combustivel utilizado pelo carro: \n");
        scanf("%s", &carro[i].combustivel);
        printf("------------------------------\n");
        printf("Digite a cor do carro: \n");
        scanf("%s", &carro[i].cor);
        printf("------------------------------\n");
        printf("Digite a parte NUMERICA da placa do carro: \n");
        scanf("%s", &carro[i].placa.finalPlaca);
        printf("------------------------------\n");
        printf("Digite a parte ALFABETICA da placa do carro: \n");
        scanf("%s", &carro[i].placa.comecoPlaca);
    }
    
    return 0;
}

void funcaoA(int quant, struct car *carro){

    for (int i = 0; i < quant ; i++)
    {
        if (carro[i].ano >= 2010 && strcmp(carro[i].combustivel, "diesel")==0)
        {
            printf("CADASTRO ENCONTRADO!\n");
            printf("Proprietario do carro numero [%i]", i);
            printf("Nome do Proprietario : %s", carro[i].dono);
        }   
    }
}
void funcaoB(int quant, struct car *carro){

    for (int i = 0; i < quant; i++)
    {
        if (strncmp(carro[i].placa.comecoPlaca, "J", 1)==0 && carro[i].placa.finalPlaca %10 == 0 || carro[i].placa.finalPlaca %10 == 2 || carro[i].placa.finalPlaca %10 == 4 || carro[i].placa.finalPlaca %10 == 7)
        {
            printf("CADASTRO ENCONTRADO!\n");
            printf("Proprietario do carro numero [%i]", i);
            printf("Nome do Proprietario : %s", carro[i].dono);
            printf("Placa: [%s-%i]\n", carro[i].placa.comecoPlaca,carro[i].placa.finalPlaca);
        }
        
    }
    
}

void funcaoC(int quant, struct car *carro){

    int somatorio;

    for (int i = 0; i < quant; i++)
    {
        somatorio += carro[i].placa.finalPlaca;
    }
    

}

