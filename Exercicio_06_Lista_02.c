#include<stdio.h>


void porcentagem(int quantAlunos, int aprovado, int reprovado);
int main(void)
{
    int quantAlunos, contAprovado=0, contReprovado=0;
    float nota[quantAlunos];


    printf("Quantos alunos presentes em sua disciplina? \n");
    scanf("%i", &quantAlunos);
    for (int i = 0; i < quantAlunos; i++)
    {
        printf("[ALUNO NUMERO [%i] ]\n", i);
        printf("Digite a nota do aluno: \n");
        scanf("%f", &nota[i]);
        fflush(stdin);
        if (nota[i] >= 7)
        {
            printf("APROVADO!\n");
            contAprovado++;

        } else if (nota[i] < 7)
        {
            printf("REPROVADO!\n");
            contReprovado++;
        }
        fflush(stdin);
    }

    porcentagem(quantAlunos, contAprovado, contReprovado);
    
    return 0;
}
void porcentagem(int quantAlunos, int aprovado, int reprovado){
    int porcentagemApro, porcentagemRepro;

    porcentagemApro = (aprovado*100)/quantAlunos;

    porcentagemRepro = (reprovado*100)/quantAlunos;

    printf("Porcentagem de alunos aprovados:[%i] \n", porcentagemApro);

    printf("Porcentagem de alunos Reprovados:[%i] \n", porcentagemRepro);
}
