#include<stdio.h>
#include<stdlib.h>

float MediaPonde1(int Alunos, float *Nota1, float *Nota2);
float Aprovacao(float *media);

int main(void)
{
    int QuantAlunos;
    char nome[QuantAlunos];
    float Nota1[QuantAlunos], Nota2[QuantAlunos], MediaPond1[QuantAlunos], Aprovar[QuantAlunos];
    
    printf("Digite a Quantidade de alunos presentes:\n");
    scanf("%i", &QuantAlunos);

    for (int i = 0; i < QuantAlunos; i++)
    {
        printf("Digite o nome do Aluno:\n");
        scanf("%s", &nome[i]);
        printf("Digite a Primeira nota do aluno numero [%i]: \n", i);
        scanf("%f", &Nota1[i]);
        printf("Digite a Segunda nota do aluno numero [%i]: \n", i);
        scanf("%f", &Nota2[i]);
        fflush(stdin);
        MediaPond1[i]= MediaPonde1(QuantAlunos, Nota1, Nota2);
    }

    printf("||      MEDIA FINAL    ||\n");
    fflush(stdin);
    for (int i = 0; i < QuantAlunos; i++)
    {
        printf("O Aluno(a) [%s] Obteve [%.2f] em teoria, e [%.2f] em pratica\n", nome[i], Nota1[i], Nota2[i]);
        printf("Media final desse Aluno(a): [%.2f]\n", MediaPond1[i]);
        Aprovar[i]=Aprovacao(MediaPond1);
    }
    

    return 0;
}

float MediaPonde1(int Alunos, float *Nota1, float *Nota2){
    float MediaPond[Alunos];

    for (int i = 0; i < Alunos; i++)
    {
        MediaPond[i]=(Nota1[i]*3)+(Nota2[i]*7)/10;
        return MediaPond[i];
    }
}

float Aprovacao(float *media){
    if (media < 7)
    {
        printf("Aluno Reprovado\n");
    }
    else if (media > 7)
    {
        printf("Aluno Aprovado\n");
    }
    return *media;
}
