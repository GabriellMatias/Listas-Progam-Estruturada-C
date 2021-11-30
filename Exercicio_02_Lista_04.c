#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct pessoas
{
    int numMatricula, serie, anoNasc;
    char nome[30], naturalidade[30], turma, sexo;
    bool aprovado;
    float media;
};

void cadastro(int quantUsuarios, struct pessoas *usuarios);
void apresendarDados(int quantUsuarios, struct pessoas *usuarios);
void porcentagemAprovados(int quantUsuarios, struct pessoas *usuarios);
void porcentagemSexo(int quantUsuarios, struct pessoas *usuarios);
void mediaIdades(int quantUsuarios, struct pessoas *usuarios);


int main(void)
{
    int quantPessoas, opcao;
    struct pessoas usuarios[quantPessoas];
    printf("1 -- [CADASTRO]\n");
    printf("1 -- [APRESENTAR DADOS]\n");
    printf("1 -- [PORCENTAGEM DE ALUNOS REPROVADOS/APROVADOS]\n");
    printf("1 -- [PORCENTAGEM DE ALUNOS MASCULINOS/FEMININO]\n");
    printf("1 -- [MEDIA DAS IDADES]\n");
    printf("\n\n");
    printf("Digite a opcao do Menu\n");
    scanf("%i", &opcao);
    switch (opcao)
    {
    case 1:
        printf("Digite a quantidade de Estudantes que serao cadastrados:\n");
        scanf("%i", &quantPessoas);
        cadastro(quantPessoas, usuarios);
        break;
    case 2:
        apresendarDados(quantPessoas, usuarios);
        break;
    case 3:
        porcentagemAprovados(quantPessoas, usuarios);
        break;
    case 4:
        porcentagemSexo(quantPessoas, usuarios);
        break;
    case 5:
        mediaIdades(quantPessoas, usuarios);
        break;
    default:printf("Opcao INVALIDA!\n");
        break;
    }



    return 0;
}
void cadastro(int quantUsuarios, struct pessoas *usuarios){

    for (int i = 0; i < quantUsuarios; i++)
    {
        printf("[CADASTRANDO ESTUDANTE NUMERO [%i] ]\n", i);

        printf("Digite o Numero da matricula: \n");
        scanf("%i", &usuarios[i].numMatricula);
        fflush(stdin);
        printf("Digite o nome: \n");
        scanf("%s", &usuarios[i].nome);
        printf("Digite o sexo: \n");
        scanf("%s", &usuarios[i].sexo);
        fflush(stdin);
        printf("Digite o ano de nascimento: \n");
        scanf("%s", &usuarios[i].anoNasc);
        printf("Digite a naturalidade do estudante: \n");
        scanf("%s", &usuarios[i].naturalidade);
        fflush(stdin);
        printf("Digite a serie: \n");
        scanf("%i", &usuarios[i].serie);
        printf("Digite a turma: \n");
        scanf("%s", &usuarios[i].turma);
        fflush(stdin);
        printf("Digite a media do estudante: \n");
        scanf("%s", &usuarios[i].media);
        fflush(stdin);
        if (usuarios[i].media >= 7)
        {
            usuarios[i].aprovado=1;
        } else if (usuarios[i].media <= 7)
        {
            usuarios[i].aprovado=0;
        }
    }
    
}
void apresendarDados(int quantUsuarios, struct pessoas *usuarios){

    for (int i = 0; i < quantUsuarios; i++)
    {
  
    printf("Numero de matricula: %i\n", usuarios[i].numMatricula);
    printf("Nome: %s\n", usuarios[i].nome);
    printf("Serie: %i\n", usuarios[i].serie);
    printf("Sexo [M/F]: %c \n", usuarios[i].sexo);
    printf("Ano de nascimento: %i\n", usuarios[i].anoNasc);
    printf("Turma: %c\n", usuarios[i].turma);
    printf("Naturalidade: %s\n", usuarios[i].naturalidade);
    printf("Media: %f\n", usuarios[i].media);
    if (usuarios[i].aprovado == true)
    {
        printf("ESTUDANTE APROVADO!\n");
    } else if (usuarios[i].aprovado=false)
    {
        printf("ESTUDANTE REPROVADO!\n");
    }

    }
}
void porcentagemAprovados(int quantUsuarios, struct pessoas *usuarios){
    int aprovados=0, reprovados=0;

    for (int i = 0; i < quantUsuarios; i++)
    {
    
        if (usuarios[i].aprovado == true)
        {
            aprovados++;
        } else if (usuarios[i].aprovado=false)
        {
            reprovados++;
        }

    }
    aprovados= (aprovados/quantUsuarios)*100;
    reprovados= (reprovados/quantUsuarios)*100;
    printf("Porcentagem de Estuantes [APROVADOS]: [%i]\n", aprovados);
    printf("Porcentagem de Estuantes [REPROVADOS]: [%i]\n", reprovados);

}
void porcentagemSexo(int quantUsuarios, struct pessoas *usuarios){

    int contadorMasc=0, contadorFemin=0;
    for (int i = 0; i < quantUsuarios; i++)
    {
    
        if (usuarios[i].sexo == 'm' || usuarios[i].sexo == 'M' )
        {
            contadorMasc++;
        } else if (usuarios[i].sexo == 'f' || usuarios[i].sexo == 'F' )
        {
            contadorFemin++;
        }
    }
    contadorMasc= (contadorMasc/quantUsuarios)*100;
    contadorFemin= (contadorFemin/quantUsuarios)*100;
    printf("Porcentagem de Estuantes do sexo [MASCULINO]: [%i]\n", contadorMasc);
    printf("Porcentagem de Estuantes do sexo [MASCULINO]: [%i]\n", contadorFemin);

}
void mediaIdades(int quantUsuarios, struct pessoas *usuarios){
    double mediaTotal=0;
    int idade[quantUsuarios];
    for (int i = 0; i < quantUsuarios; i++)
    {
        idade[i]=usuarios[i].anoNasc-2021;

        mediaTotal+=idade[i];
    }
    mediaTotal=mediaTotal/quantUsuarios;
    printf("Media total das idades: %lf", mediaTotal);

}