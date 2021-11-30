#include<stdio.h>
#include<windows.h>
#include<ctype.h>
#include<string.h>

int main(void)
{
    char frase[50];
    char nome[30];

    printf("Digite a frase do candidato: \n");
    scanf("%s", &frase);

    printf("Digite o nome do candidato: \n");
    scanf("%s", &nome);

    for (int i = 0; i < 30; i++)
    {
        nome[i]=toupper(nome[i]);
    }

    printf("Processando frase..\n\n");
    Sleep(800);

    printf("\t\t\t\t%s\n", strcat(frase, nome));
    Sleep(10000);
    

    return 0;
}
