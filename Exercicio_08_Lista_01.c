#include<stdio.h>
#include<math.h>

int main(void)
{
    int Pessoas, idade[Pessoas], media=0;
    int Pvelha, aux=0;
    fflush(stdin);
    printf("Digite quantas pessoas participarao da pesquisa [Maximo-100]\n");
    scanf("%i", &Pessoas);

    for (int i = 0; i < 20; i++)
    {
        printf("Digite a idade da [%i] Pessoa:\n", i);
        scanf("%i", idade[i]);
    }
    media = idade[Pessoas]/Pessoas;

    //bobble short
    for (int i = 0; i < Pessoas; i++)
    {
        for (int j = 0; j < Pessoas-1-i; j++)
        {
            if (idade[j] > idade [j+1])
            {
                aux = idade[j];
                idade[j]= idade[j+1];
                idade[j+1]= aux;
            }
            
        }
  
    }
    

    printf("Media total das idades : [%i]\n", media);
    printf("Pessoa Mais velha tem: [%i]\n", idade[Pessoas]);
    printf("Posicao vetorial da pessoa mais velha: [%i]\n", Pvelha);
    
    return 0;
}
