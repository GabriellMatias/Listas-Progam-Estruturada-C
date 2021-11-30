#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int QuantCds, Cds[QuantCds], opcao;
    int aumento=0, porcentagem;

    printf("Digite a quantidade de CDs:\n");
    scanf("%i", &QuantCds);

    for (int i = 0; i < QuantCds; i++)
    {
        printf("Digite o valor do [%i] CD:\n", i);
        scanf("%i", &Cds[QuantCds]);
    }
    do
    {
        printf("Digite a opcao\n [1]- Aumentar os precos em 10/Cento\n[2]- Determinar a porcentagem do aumento\n");
        switch (opcao)
        {
        case 1 :
            for (int i = 0; i < QuantCds; i++)
        {
            printf("O valor de todos os CDs Foram Aumentados em 10 por cento!\n");
            Cds[QuantCds] *= 0,10;
        }
            break;
        case 2:
        printf("Digite quanto de aumento [em porcentagem] deseja colocar em seus produtos: \n");
        scanf("%i", &aumento);
        porcentagem = aumento/100;

        for (int i = 0; i < QuantCds; i++)
        {
            Cds[QuantCds] *= porcentagem;   
        }
        printf("Valor dos produtos aumentado em [%i] /Cento\n", aumento);
        break;
        
        default: printf("Opcao desejada invalida, digite novamente");
            break;
        }
    } while (opcao != 1 || opcao != 2);
    
    
    return 0;
}
