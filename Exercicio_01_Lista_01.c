#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    float Notas[30];

    for (int i = 0; i < 30; i++)
    {
        printf("Qual a nota do aluno numero [%i]: \n", i);
        scanf("%f", &Notas[i]);
        
    }
    for (int i = 0; i < 30; i++)
    {
        printf("Nota do aluno numero [%i] = %.1f \n", i, Notas[i]);
        fflush(stdin);
    }
    
    return 0;
}

