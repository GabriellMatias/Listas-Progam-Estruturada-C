#include<stdio.h>
#include<stdlib.h>

void numMaior(int quant, int *vet, int *ponte);

int main(void)
{
    int quant;
    int vetor[quant];
    int *pont;
    pont = &vetor[quant];

    printf("Digite quantos numeros serao informados\n");
    scanf("%i", &quant);
    fflush(stdin);

    for (int i = 0; i < quant; i++)
    {

        printf("DADOS DO [%i] NUMERO\n");
        printf("Digite um numero: \n");
        scanf("%i", &vetor[i]);
    }
    
    numMaior(quant, vetor, pont);
    return 0;
}

void numMaior(int quant, int *vet, int *ponte){  

    int maior = vet[0];
    int cont;

    for (int i = 0; i < quant; i++)
    {
        if (maior > vet[i])
        {
            maior = *ponte;
        }
        if (maior == vet[i+1])
        {
            cont++;
        }
        
        
    }
    printf("Maior numero digitado: %i\n Quantidade de repeticoes desse numero: %i", maior, cont);
    
}