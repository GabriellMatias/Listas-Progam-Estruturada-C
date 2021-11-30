#include<stdio.h>

void classifica(float *peso);

int main(void)
{
    float peso[3];

    for (int i = 0; i < 3; i++)
    {
        printf("[USUARIO NUMERO [%i]]\n", i);
        printf("Digite o peso do usuario: \n");
        scanf("%f", &peso[i]);
        fflush(stdin);
    }
    classifica(peso);
    
    return 0;
}
void classifica(float *peso){

    int aux;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3-i; j++)
        {
            fflush(stdin);
            if (peso[j] > peso[j+1])
            {
                aux = peso[j];
                peso[j] = peso[j+1];
                peso[j+1] = aux;
            }
            
        }
        printf("Peso: %.1f\n", peso[i]);
        
    }
    
}
