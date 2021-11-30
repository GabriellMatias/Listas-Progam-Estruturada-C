#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    struct end_Pessoa
    {
        char rua[50], setor[50], cidade[30];
        int cep;
    };
    
    struct pessoa
    {
        struct end_Pessoa endereco;
        int telefone;
        char nome[30]
    }pessoa[3];

    for (int i = 0; i < 3; i++)
    {
       fflush(stdin);
       printf("Digite o Nome do usuario: \n");
       scanf("%s", &pessoa[i].nome);

       printf("Digite o Telefone do usuario: \n");
       scanf("%i", &pessoa[i].telefone);

       printf("## Cadastrando Endereco ##\n");
       printf("Digite a rua  do usuario: \n");
       scanf("%s", &pessoa[i].endereco.rua);
       fflush(stdin);
       printf("Digite o setor do usuario: \n");
       scanf("%s", &pessoa[i].endereco.setor);

       printf("Digite o nome da cidade do usuario: \n");
       scanf("%s", &pessoa[i].endereco.cidade);

       printf("Digite o CEP da cidade do usuario: \n");
       scanf("%i", &pessoa[i].endereco.cep);
       
    }
    for (int i = 0; i < 3; i++)
    {
        fflush(stdin);
        printf("NOME: %s \n", pessoa[i].nome);
        printf("TELEFONE: %i \n", pessoa[i].telefone);
        printf("ENDERECO [RUA]: %s \n", pessoa[i].endereco.rua);
        
        printf("ENDERECO [SETOR]: %s \n", pessoa[i].endereco.setor);

        printf("ENDERECO [CIDADE]: %s \n", pessoa[i].endereco.cidade);

        printf("ENDERECO [CEP]: %i \n", pessoa[i].endereco.cep);
        printf("\n\n");
    }
    
    

    
    return 0;
}
