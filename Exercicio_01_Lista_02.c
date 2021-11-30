#include<stdio.h>
#include<stdlib.h>

float mediaTotal(int Alunos, float *Notas);
int main(void)
{
    int Quantidade=0;
    float Notas[Quantidade], MediaNotas;

    printf("Digite a quantidade de alunos que participarao da pesquisa [MAX:05] :\n");
    scanf("%i", &Quantidade);
    for (int i = 0; i < Quantidade; i++)
    {
        printf("Digite a nota do [%i] Aluno: \n", i);
        scanf("%f", &Notas[i]);
    }
    MediaNotas = mediaTotal(Quantidade, Notas);
    printf("Media total: %.2f \n", MediaNotas);
    system("pause");
    
    return 0;
}

float mediaTotal(int Alunos, float *Notas){
    float soma=0, media=0;
    for (int i = 0; i < Alunos; i++)
    {
        soma+=Notas[i];
    }
    media=soma/Alunos;
    return media;
}