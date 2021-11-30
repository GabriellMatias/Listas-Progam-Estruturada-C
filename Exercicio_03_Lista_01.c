#include<stdio.h>
#include<string.h>

int main(void)
{
    int QuantNum;
    double somatorio=0, Num[QuantNum];
    
    printf("Qual a quantidade de algarismos a serem somados? [Maximo=100]\n");
    do
    {
        scanf("%i", &QuantNum);
        if (QuantNum < 0 || QuantNum > 100)
        {
            printf("Valor fora dos limites estabelecidos, por favor digite novamente: \n");
        }
        
    } while (QuantNum < 0 || QuantNum > 100); 

    for (int i = 0; i < QuantNum; i++)
    {
        printf("Digite o valor do [%i] algarismo:\n", i);
        scanf("%lf", &Num[QuantNum]);
        fflush(stdin);
        somatorio += Num[QuantNum];
    }
    printf("O somatorio total dos algarismos foi : [%.2lf]\n", somatorio);
    
    return 0;
}
