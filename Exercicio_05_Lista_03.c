#include<stdio.h>

struct vetorA
{
    int a, b, c;
};
struct vetorB
{
    int a, b, c;
};
int main(int argc, char const *argv[])
{
    int soma;
    struct vetorA A;
    struct vetorB B;

    printf("digite o valor da primeira variavel A: \n");
    scanf("%i", &A.a);
    printf("digite o valor da segunda variavel A: \n");
    scanf("%i", &A.b);
    printf("digite o valor da terceira variavel A: \n");
    scanf("%i", &A.c);

    printf("\t\t\t\t [VARIAVEL B]\n");

    printf("digite o valor da primeira variavel B: \n");
    scanf("%i", &B.a);
    printf("digite o valor da segunda variavel B: \n");
    scanf("%i", &B.b);
    printf("digite o valor da terceira variavel B: \n");
    scanf("%i", &B.c);

    soma = (A.a+B.a)+(A.b+B.b)+(A.c+B.c);
    printf("\t\tSOMA TOTAL: [%i] \n", soma);

    return 0;
}
