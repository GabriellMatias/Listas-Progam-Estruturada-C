#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void)
{
    int Quant, i;
    double Var[Quant];

    printf("Digite a quantidade de elementos que serao processados: \n");
    scanf("%i", &Quant);

    for (i = 0; i < Quant; i++)
    {
        printf("Digite o [%i] elemento: \n", i);
        scanf("%lf", &Var[Quant]);
        //descobrir se e igual
        if (Var[Quant] == Var[Quant])//fazer funcao separada para bool
        {
            printf("Valores iguais identificados\n");
        }
        
    }
    return 0;
}
