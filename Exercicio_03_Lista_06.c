#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int vetor[5];
    int *pont;
    calloc(5, vetor);//aprendendo alocacao dinamica(IGNORAA)
    for (int i = 0; i < 5; i++)
    {
        printf("Digite um numero: \n");
        scanf("%i", &vetor[i]);
        pont=&vetor[i];
        if (vetor[i] % 2 == 0)
        {
            printf("A posicao desse numero e [%i], e o valor dessa variavel e [%i]\n", pont, vetor[i]);
        }
        
    }
    free(vetor);
    
    return 0;
}
