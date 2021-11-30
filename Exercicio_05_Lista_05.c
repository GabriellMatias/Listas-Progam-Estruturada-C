#include<stdio.h>
#include<time.h>
#include<windows.h>

int main(void)
{
    char primeiroNome[30], segundoNome[30];
    
    printf("Digite seu primeiro nome: \n");
    scanf("%s", &primeiroNome);

    printf("Digite seu segundo nome: \n");
    scanf("%s", &segundoNome);

    printf("[CONVERSAO DE PADRONIZACAO DA TRANSPORTADORA]\n");
    printf("Processando..\n");
    Sleep(1000);

    printf("Nome Formatado: [%s/%s]\n", segundoNome, primeiroNome);
    

    return 0;
}
