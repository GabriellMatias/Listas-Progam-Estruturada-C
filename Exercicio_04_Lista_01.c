#include<stdio.h>
#include<string.h>

int main(void)
{
    int QuantLetras;
    char letra[QuantLetras];
    
    printf("Digite a quantidade de letras que o programa deve processar: \n");
    scanf("%i", &QuantLetras);
    fflush(stdin);

    for (int i = 0; i < QuantLetras; i++)
    {
        printf("Digite a [%i] Letra: \n", i);
        scanf("%s", &letra[QuantLetras]);

    }
    for (int i = QuantLetras; i >= 0; i--)
    {
        printf("Letras em ordem inversa: [%c,]", letra[QuantLetras]);
    }
    
    
    return 0;
}
