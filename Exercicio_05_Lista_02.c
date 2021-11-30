#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

void validaQuantidade(int quantHabitante);

int main(void)
{
    int quantHab;
    char opcao;

    printf("Informe a quantidade de habitantes presentes no municipio: \n");
    scanf("%i", &quantHab);
    fflush(stdin);
    printf("Deseja classificar esse municipio?\n");
    scanf("%c", &opcao);
    opcao=toupper(opcao);
    switch (opcao)
    {
    case 'S':
        validaQuantidade(quantHab);
        break;

    case 'N':
    system("pause");
    exit(1);
        break;
    
    default: printf("Opcao Invalida!!\n");
        break;
    }
    return 0;
}
void validaQuantidade(int quantHabitante){
    if (quantHabitante >= 1000001)
    {
        printf("Municipio classificado como [METROPOLE]\n");
    }
    else if (quantHabitante < 1)
    {
        printf("NUMERO DE HABITANTES INFORMADO INVALIDO\n");
    }else if (quantHabitante < 5001)
    {
        printf("Municipio classificado como [VILA]\n");
    }else if (quantHabitante < 15001)
    {
        printf("Municipio classificado como [DISTRITO]\n");
    }
    else if (quantHabitante < 1000001)
    {
        printf("Municipio classificado como [CIDADE]\n");
    }
    
}