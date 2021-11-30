#include<stdio.h>
#include<string.h>
#include<windows.h>

struct usuario
{
    char primeiroNome[30];
    char ultimoNome[30];
};

int main(void)
{
    int tamanho[5], tamanho2[5];
    struct usuario nomes[5];
     for (int i = 0; i < 5; i++)
     {
       printf("\n\n");
       printf("\t\t[USUARIO NUMERO [%i] ]\n", i);
       printf("Digite o PRIMEIRO nome:\n");
       scanf("%s", &nomes[i].primeiroNome);
       printf("Digite o ULTIMO nome:\n");
       scanf("%s", &nomes[i].ultimoNome);
     }
     printf("\t\tProcessando\n");
     Sleep(2);
     
     for (int i = 0; i < 5; i++)
     {
        tamanho[i]=strlen(nomes[i].primeiroNome);
        printf("\n\n");
        printf("\t\t[USUARIO NUMERO [%i] ]\n", i);
        printf("Tamanho do Primeiro Nome: %i \n", tamanho[i]);

        tamanho2[i]=strlen(nomes[i].ultimoNome);
        printf("Tamanho do Ultimo Nome: %i \n", tamanho2[i]);

        printf("Nome completo: %s\n", strcat(nomes[i].primeiroNome, nomes[i].ultimoNome));
     }
     
        
    return 0;
}
