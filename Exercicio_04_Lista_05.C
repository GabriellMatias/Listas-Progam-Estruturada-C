#include <string.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct infoma info;
struct infoma
{
    char comida[20];
    char porcao[20];
    float caloria;
} dados;

void dieta(info dados)
{
    int matriz[2][2];
    printf("----------DIGITE SOBRE SUA DIETA----------\n\n");
    printf("Digite o nome da comida:");
    fgets(dados.comida, 20, stdin);
    printf("Digite o peso da porcao em gramas:");
    fgets(dados.porcao, 20, stdin);
    printf("Digite o valor calorico existente em 1g do alimento:");
    scanf("%f", &dados.caloria);

    printf("\n----------PRINTANDO DADOS----------\n\n");
    printf("Comida:%s", dados.comida);
    printf("Porcao:%s", dados.porcao);
    printf("Caloria em 1g:%.2f cal", dados.caloria);
}

void printarDados(info dados)
{
}
int main()
{
    dieta(dados);
}