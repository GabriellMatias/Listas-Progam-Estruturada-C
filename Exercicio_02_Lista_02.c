#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float Quadrado(float Base, int Expoente);
int main(void)
{
    int Expoente;
    float Base, resultado=0;

    printf("Digite a variavel para o calculo: \n");
    scanf("%f", &Base);
    printf("Digite o expoente para a elevacao da variavel\n");
    scanf("%i", &Expoente);

    resultado = Quadrado(Base, Expoente);

    printf("Resultado final : [%.2f]\n", resultado);

    return 0;
}

float Quadrado(float Base, int Expoente){
    float resultado=0;

    resultado = pow(Base, Expoente);
    return resultado;
}