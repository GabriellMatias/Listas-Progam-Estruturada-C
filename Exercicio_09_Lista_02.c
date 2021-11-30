#include<stdio.h>

int main(void)
{
    leValidaPeso();

    return 0;
}

void leValidaPeso(){

    float peso=0;
    printf("Digite o Peso:\n");
    scanf("%f", &peso);
    fflush(stdin);
    apresentaGrama(peso);
    apresentaTonelada(peso);
}

void apresentaGrama(float peso){
    float grama;
    grama = peso*1000;
    fflush(stdin);
    printf("Gramas:%.2f \n", grama);
    return grama;
}

void apresentaTonelada(float peso){
    float tonelada;
    tonelada = peso/1000;
    fflush(stdin);
    printf("Toneladas:%.2f \n", tonelada);
    return tonelada;
}