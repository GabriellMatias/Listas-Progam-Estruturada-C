#include<stdio.h>
#include<string.h>
#include<ctype.h>


struct nome
{
    char primeiroNome[30];
    char segundoNome[30];
}nomes[2];

int main(void)
{
    for (int i = 0; i < 2; i++)
    {
        printf("Digite o primeiro nome: \n");
        scanf("%s", &nomes[i].primeiroNome);
        fflush(stdin);

        printf("Digite o segundo nome:\n");
        scanf("%s", &nomes[i].segundoNome);
        fflush(stdin);
        
        
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 30; j++)
        {

            fflush(stdin);
            nomes[i].segundoNome[j]=tolower(nomes[i].segundoNome[j]);
            nomes[i].primeiroNome[j]=toupper(nomes[i].primeiroNome[j]);
        }

        printf("PRIMEIRO NOME : [%s]\n", nomes[i].primeiroNome);
        printf("SEGUNDO NOME : [%s]\n", nomes[i].segundoNome);
    }
    
    
    return 0;
}