#include<stdio.h>
#include<windows.h>
#include<stdlib.h>


int main(void)
{
    int quant, vetor[quant];
    int *pont;
    pont = &vetor[quant];



    printf("Informe a quantidade de numeros que serao digitados: ");
    scanf("%i", &quant);

    for (int i = 0; i < quant; i++)
    {
        printf("\n\t[DADOS DO VETOR NUMERO [%i] ]\n", i);
        printf("Digite um numero: ");
        scanf("%i", &vetor[i]);

    }
    printf("[PROCESSANDO..]\n");
    Sleep(2000);
    for (pont = vetor; pont < vetor+quant; pont++)
    {
        *pont += 1;
    }
    printf("Numeros Atualizados\n");
    for (pont = vetor; pont < vetor+quant; pont++)
    {
        printf("Numero: [%i]\n", *pont);
    }
    
    return 0;
}

