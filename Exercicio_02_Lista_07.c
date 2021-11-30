#include<stdio.h>
#include<stdlib.h>


typedef struct rest
{
    
    char nome[30], end[30], tipComida[30];
    float preco;
  
};

typedef struct ponteiro
{
    struct rest dados;
    struct ponteiro *pont;
};


int main(void)
{
    
    int resp;
    struct ponteiro *liberarMemo, *pAuxiliar, *new, *prox= NULL ;
    do
    {
        printf("BEM VINDO AO SISTEMA DE CADASTRO DE RESTAURANTES MATIAZ\n");
        printf("\t\tMENU\n");
        printf("1 - [CADASTRO]\n");
        printf("2-  [LISTAGEM]\n");
        printf("3 - [SAIR]\n");
        printf("DIGITE SUA OPCAO: \n");
        scanf("%i", &resp);
        system("cls");
        switch (resp)
        {
        case 1:

                new = malloc(sizeof(struct ponteiro));

                if (new == NULL)
                {
                    exit(1);
                }
                
                printf("Digite o nome do restaurante: \n");
                scanf("%s", &new->dados.nome);
                printf("Digite o endereco do restaurante: \n");
                scanf("%s", &new->dados.end);
                printf("Digite o tipo de comida fornecida pelo restaurante: \n");
                scanf("%s", &new->dados.tipComida);
                printf("Digite o preco medio do restaurante: \n");
                scanf("%f", &new->dados.preco);
                fflush(stdin);
                new->pont = prox;
                prox = new;
                pAuxiliar = prox;     
            break;

        case 2:
                while (pAuxiliar != NULL)
                {
                    
                    fflush(stdin);
                    printf("Nome: %s\n", pAuxiliar->dados.nome);
                    printf("Endereco: %s\n", pAuxiliar->dados.end);
                    printf("Tipo de comida: %s\n", pAuxiliar->dados.tipComida);
                    printf("Preco Medio: %.2f\n", pAuxiliar->dados.preco);
                    pAuxiliar = pAuxiliar->pont;
                    printf("DADOS DO PROXIMO RESTAURANTE\n\n"); 
                }
                system("Pause");
                system("cls");
            break;
        case 3:
                pAuxiliar = prox;
                while (pAuxiliar != NULL)
                {
                    liberarMemo = pAuxiliar;
                    pAuxiliar= pAuxiliar->pont;
                    free(liberarMemo);
                }
                exit(1);
            break;
        
        default:printf("OPCAO INVALIDA POR FAVOR DIGITE OUTRA OPCAO\n");
            break;
        }
    }while (resp != 3);
    
    return 0;
}
