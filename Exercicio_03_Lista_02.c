#include<stdio.h>
#include<stdlib.h>

float MediaNormal(int Alunos, float *Nota1, float *Nota2);
float MediaPonde1(int Alunos, float *Nota1, float *Nota2);
float MediaPonde2(int Alunos, float *Nota1, float *Nota2);

int main(void)
{
    int QuantAlunos;
    float Nota1[QuantAlunos], Nota2[QuantAlunos], Media_Normal[QuantAlunos], MediaPond1[QuantAlunos], MediaPond2[QuantAlunos];
    
    printf("Digite a Quantidade de alunos presentes [MAX: 20]:\n");
    scanf("%i", &QuantAlunos);

    for (int i = 0; i < QuantAlunos; i++)
    {
        printf("Digite a Primeira nota do aluno numero [%i]: \n", i);
        scanf("%f", &Nota1[i]);
        printf("Digite a Segunda nota do aluno numero [%i]: \n", i);
        scanf("%f", &Nota2[i]);
        fflush(stdin);
        Media_Normal[i]=MediaNormal(QuantAlunos, Nota1, Nota2);
        MediaPond1[i]= MediaPonde1(QuantAlunos, Nota1, Nota2);
        MediaPond2[i]= MediaPonde2(QuantAlunos, Nota1, Nota2);
    }

    for (int i = 0; i < QuantAlunos; i++)
    {
        printf("Media Aritimetrica da notas do aluno numero [%i]: [%.2f]\n", i, Media_Normal[i]);
    }
    printf("||      MEDIA PONDERADA COM PESOS 4 E 6 RESPECTIVAMENTE         ||\n");
    for (int i = 0; i < QuantAlunos; i++)
    {
        printf("Media Ponderada da notas do aluno numero [%i]: [%.2f]\n", i, MediaPond1[i]);
    }
    printf("||      MEDIA PONDERADA COM PESOS 3 E 7 RESPECTIVAMENTE         ||\n");
    for (int i = 0; i < QuantAlunos; i++)
    {
        printf("Media Ponderada da notas do aluno numero [%i]: [%.2f]\n", i, MediaPond2[i]);
    }
 
    return 0;
}
//Primeira funcao
float MediaNormal(int Alunos, float *Nota1, float *Nota2){
    float media[Alunos];

    for (int i = 0; i < Alunos; i++)
    {
        media[i]=(Nota1[i]+Nota2[i])/2;
        return media[i];
    }
}
//Segunda Funcao
float MediaPonde1(int Alunos, float *Nota1, float *Nota2){
    float MediaPond[Alunos];

    for (int i = 0; i < Alunos; i++)
    {
        MediaPond[i]=(Nota1[i]*4)+(Nota2[i]*6)/10;
        return MediaPond[i];
    }
}

float MediaPonde2(int Alunos, float *Nota1, float *Nota2){
    float MediaPond2[Alunos];

    for (int i = 0; i < Alunos; i++)
    {
        MediaPond2[i]=(Nota1[i]*3)+(Nota2[i]*7)/10;
        return MediaPond2[i];
    }
}