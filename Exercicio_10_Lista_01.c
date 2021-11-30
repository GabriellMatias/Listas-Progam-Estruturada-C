#include<stdio.h>
#include<math.h>

int main(void)
{
    int quantAlunos;
    float notas[quantAlunos];
    int freqNotas, quantRepeticao;

    printf("Digite a quantidade de alunos na turma: \n");
    scanf("%i", &quantAlunos);

    for (int i = 0; i < quantAlunos; i++)
    {
        printf("Digite a nota do Aluno numero [%i]: \n", i);
        do
        {
        scanf("%f", &notas[i]);
        if (notas[i] < 0 || notas[i] > 10)
        {
            printf("Limite excedido, digite uma nota valida!\n");
        }
        } while (notas[i] < 0 || notas[i] > 10);
        
        switch (notas[i])
        {
        case 1:
            /* code */
            break;
        
        default:
            break;
        }
        

    }
    
    
    
    return 0;
}
