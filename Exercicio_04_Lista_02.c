#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main(void)
{
    int Idade, Ano_Atual, Ano_Nascimento;
    float Classificacao;

    printf("Digite o Ano do seu Nascimento: \n");
    scanf("%i", &Ano_Nascimento);
    printf("Digite o Ano Atual: \n");
    scanf("%i", &Ano_Atual);

    Idade= apresentaClassificacao(Ano_Atual, Ano_Nascimento);
    Classificacao=obtemNivel(Idade);


    
    return 0;
}

int apresentaClassificacao(int AnoAtual, int Ano_nascimento){
    int idade=0;

    idade= AnoAtual-Ano_nascimento;

    return idade;
}

float obtemNivel(int idade){

    if (idade > 58)
    {
        printf("IDOSO");
    }
    else if (idade > 25)
    {
        printf("ADULTO");
    }
    else if (idade > 18)//certo?
    {
        printf("JOVEM");
    }
    else if (idade > 10)
    {
        printf("ADOLESCENTE");
    }
    else if (idade > 0)
    {
        printf("CRIANCA");
    }
    return idade;
}

float CalculaIdade(int idade, float Class){
    bool Mostrar=true;

    if (Mostrar = true)
    {
        printf("Idade: [%i]\n", idade);
        printf("Classificacao: [%f]\n", Class);
    }
    return Mostrar;
}

