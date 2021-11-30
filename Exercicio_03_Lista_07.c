#include<stdio.h>
#include<stdlib.h>
#include<time.h>

typedef struct dieta
{
    char comida[30];
    float peso, numCalorias;
    struct dieta *proxPointer;
};

int main(void)
{
    struct dieta *Aux, *liberarMemo, *dados, *pont=NULL;
    int opcao;

    do
    {
        printf("BEM VINDO AO MENU\n");
        printf("1 - [CADASTRO]\n");
        printf("2-  [LISTAGEM]\n");
        printf("3 - [SAIR]\n");
        scanf("%i", &opcao);
        switch (opcao)
        {
        case 1:
            dados=malloc(sizeof(struct dieta));
            if (dados == NULL)
            {
                printf("MEMORIA INSUFICIENTE \n");
                exit(1);
            }
            
            cadastrar(dados);
            dados->proxPointer = pont;
            pont = dados;
            Aux = pont;

            break;
        case 2:
            while (Aux != NULL)
            {
                listagem(Aux);
                Aux=Aux->proxPointer;
            }
        
            
            break;
        case 3:
            printf("Saindo...\n");
            _sleep(1000);
            system("Pause");
            Aux = pont;
            while (Aux != NULL)
            {
                liberarMemo=Aux;
                Aux=Aux->proxPointer;
                free(liberarMemo);
            }
            exit(1);
            break;
        default: printf("OPCAO INVALIDA\n");
            break;
        }
    } while (opcao != 3);

    return 0;
}
void cadastrar(struct dieta *dados){

    printf("Digite a comida desejada: \n");
    scanf("%s", &dados->comida);
    printf("Digite o peso da comida: \n");
    scanf("%f", &dados->peso);
    printf("Digite o numero de calorias contidas na comida: \n");
    scanf("%f", &dados->numCalorias);

}
void listagem(struct dieta *Aux){

    printf("Comida: [%s] \n", Aux->comida);
    printf("Peso: [%.2f] \n", Aux->peso);
    printf("Numero de calorias: [%.2f] \n", Aux->numCalorias);

}