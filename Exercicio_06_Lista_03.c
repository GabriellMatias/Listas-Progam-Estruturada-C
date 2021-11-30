#include<stdio.h>
#include<stdlib.h>


struct endereco
{
    char rua[30], bairro[30], cidade[30], estado[30];
    int cep;
};

struct usuarios
{
    char nome[30], estadoCivil[30], sexo;
    struct endereco end;
    int rg, cpf, idade, telefone;
    float salario; 
};

void cadastro(struct usuarios *cadastro);
void sexoMasculino(struct usuarios *cadastro);
void maiorIdade(struct usuarios *cadastro);
void buscarPorRG(struct usuarios *cadastro);
void salario(struct usuarios *cadastro);

int main(void)
{   
    struct usuarios cadastro[5];
    int opcao;
    do
    {

        printf("1-- [CADASTRAR USUARIOS]\n");
        printf("2-- [PESSOA COM MAIOR IDADE]\n");
        printf("3-- [PESSOAS DO SEXO MASCULINO]\n");
        printf("4-- [PESSOAS COM O SALARIO >= 1000]\n");
        printf("5-- [BUSCAR PESSOA PELO RG]\n");
        printf("Digite sua opcao:\n");
        scanf("%i", &opcao);
        fflush(stdin);
        switch (opcao)
        {
        case 1:

            cadastrarUsuarios(cadastro);
            break;
        case 2:
            maiorIdade(cadastro);
            sexoMasculino(cadastro);
            break;
        case 3:
            sexoMasculino(cadastro);
            salario(cadastro);
            break;
        case 4:
            salario(cadastro);
            buscarPorRG(cadastro);
            break;
        case 5:
            
            buscarPorRG(cadastro);
            break;
        case 6:
            system("pause");
            exit(1);
        
        default:printf("Opcao Invalida!\n");
            break;
        }
    } while (opcao != 6);
     return 0;
 }
 

void cadastrarUsuarios(struct usuarios *cadastro){

    for (int i = 0; i < 5; i++)
    {
        fflush(stdin);
        printf("[CADASTRANDO USUARIO NUMERO [%i]\n", i);
        printf("Informe o nome do usuario: \n");
        scanf("%s", &cadastro[i].nome);
        printf("Informe o Estado Civil do usuario: \n");
        scanf("%s", &cadastro[i].estadoCivil);
        printf("Informe o sexo [M/F] do usuario: \n");
        scanf("%s", &cadastro[i].sexo);
        fflush(stdin);
        printf("Informe o telefone do usuario: \n");
        scanf("%i", &cadastro[i].telefone);
        printf("Informe o RG[IDENTIDADE] do usuario: \n");
        scanf("%i", &cadastro[i].rg);
        printf("Informe o CPF do usuario: \n");
        scanf("%i", &cadastro[i].cpf);
        fflush(stdin);
        printf("Informe a idade do usuario: \n");
        scanf("%i", &cadastro[i].idade);
        printf("Informe o salario do usuario: \n");
        scanf("%f", &cadastro[i].salario);
        fflush(stdin);
        printf("\n\n");
        printf("[CADASTRANDO ENDERECO DO USUARIO [%i]\n", i);
        printf("Informe a rua onde reside do usuario: \n");
        scanf("%s", &cadastro[i].end.rua);
        fflush(stdin);
        printf("Informe o bairro onde reside o usuario: \n");
        scanf("%s", &cadastro[i].end.bairro);
        printf("Informe a cidade do usuario: \n");
        scanf("%s", &cadastro[i].end.cidade);
        fflush(stdin);
        printf("Informe o estado do usuario: \n");
        scanf("%s", &cadastro[i].end.estado);
        printf("Informe o CEP do usuario: \n");
        scanf("%i", &cadastro[i].end.cep);
    }
}
void maiorIdade(struct usuarios *cadastro){

    int maior=cadastro[0].idade;
    for (int i = 1; i < 5; i++)
    {
        if (cadastro[i].idade > maior)
        {
            maior = cadastro[i].idade;
            printf("Maior idade encontrada de: %i", maior);
        }
        
    }
    
}
void sexoMasculino(struct usuarios *cadastro){

    for (int i = 0; i < 5; i++)
    {
        if (cadastro[i].sexo == 'M' || cadastro[i].sexo == 'm')
        {
            printf("[PRINTANDO INFORMACOES DO USUARIO NUMERO [%i] NA TELA]\n", i);

            printf("Nome: %s\n", cadastro[i].nome);
            fflush(stdin);
            printf("Estado Civil: %s\n", cadastro[i].estadoCivil);
            printf("Sexo: %s\n", cadastro[i].sexo);
            printf("Telefone: %s\n", cadastro[i].telefone);
            printf("RG/Identidade: %s\n", cadastro[i].rg);
            printf("CPF: %s\n", cadastro[i].cpf);
            printf("Idade: %s\n", cadastro[i].idade);
            fflush(stdin);
            printf("Salario: %s\n", cadastro[i].salario);
            printf("\n[PRINTANDO ENDERECO DO USUARIO]\n");
            printf("Rua: %s\n", cadastro[i].end.rua);
            printf("Bairro: %s\n", cadastro[i].end.bairro);
            fflush(stdin);
            printf("Cidade: %s\n", cadastro[i].end.cidade);
            printf("Estado: %s\n", cadastro[i].end.estado);
            printf("CEP: %s\n", cadastro[i].end.cep);
            
        }
        
    }
    
}
void salario(struct usuarios *cadastro){

    for (int i = 0; i < 5; i++)
    {
        if (cadastro[i].salario >=1000)
        {
            printf("[PRINTANDO INFORMACOES DO USUARIO NUMERO [%i] NA TELA]\n", i);

            printf("Nome: %s\n", cadastro[i].nome);
            fflush(stdin);
            printf("Estado Civil: %s\n", cadastro[i].estadoCivil);
            printf("Sexo: %s\n", cadastro[i].sexo);
            printf("Telefone: %s\n", cadastro[i].telefone);
            printf("RG/Identidade: %s\n", cadastro[i].rg);
            fflush(stdin);
            printf("CPF: %s\n", cadastro[i].cpf);
            printf("Idade: %s\n", cadastro[i].idade);
            printf("Salario: %s\n", cadastro[i].salario);
            fflush(stdin);
            printf("\n[PRINTANDO ENDERECO DO USUARIO]\n");
            printf("Rua: %s\n", cadastro[i].end.rua);
            printf("Bairro: %s\n", cadastro[i].end.bairro);
            printf("Cidade: %s\n", cadastro[i].end.cidade);
            fflush(stdin);
            printf("Estado: %s\n", cadastro[i].end.estado);
            printf("CEP: %s\n", cadastro[i].end.cep);
            
        }
        
    }
}
void buscarPorRG(struct usuarios *cadastro){
    int buscarRG;
    printf("Digite o RG do Usuario que deseja buscar:\n");
    scanf("%i", &buscarRG);

    for (int i = 0; i < 5; i++)
    {
        if (buscarRG = cadastro[i].rg)
        {
            printf("[PRINTANDO INFORMACOES DO USUARIO NUMERO [%i] NA TELA]\n", i);

            printf("Nome: %s\n", cadastro[i].nome);
            fflush(stdin);
            printf("Estado Civil: %s\n", cadastro[i].estadoCivil);
            printf("Sexo: %s\n", cadastro[i].sexo);
            printf("Telefone: %s\n", cadastro[i].telefone);
            fflush(stdin);
            printf("RG/Identidade: %s\n", cadastro[i].rg);
            printf("CPF: %s\n", cadastro[i].cpf);
            printf("Idade: %s\n", cadastro[i].idade);
            fflush(stdin);
            printf("Salario: %s\n", cadastro[i].salario);
            printf("\n[PRINTANDO ENDERECO DO USUARIO]\n");
            printf("Rua: %s\n", cadastro[i].end.rua);
            printf("Bairro: %s\n", cadastro[i].end.bairro);
            printf("Cidade: %s\n", cadastro[i].end.cidade);
            fflush(stdin);
            printf("Estado: %s\n", cadastro[i].end.estado);
            printf("CEP: %s\n", cadastro[i].end.cep);
            
        }
        
    }
}