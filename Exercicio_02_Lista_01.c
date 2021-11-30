#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int alunos;
    float Notas[alunos];

    printf("Digite a quantidade de alunos presentes na turma: \n");
        do
        {
            scanf("%i", &alunos);
            fflush(stdin);
            if (alunos < 0 || alunos > 50)
            {
                printf("Numero informado invalido, por favor digite o a quantidade de alunos novamente: \n");
            }
            
        } while (alunos < 0 || alunos > 50);

    for (int i = 0; i < alunos; i++)
    {
        printf("Qual a nota do aluno numero [%i]: \n", i);
        scanf("%f", &Notas[i]);
        
    }
    for (int i = 0; i < alunos; i++)
    {
        printf("Nota do aluno numero [%i] = %.1f \n", i, Notas[i]);
        fflush(stdin);
    }
    
    return 0;
}

