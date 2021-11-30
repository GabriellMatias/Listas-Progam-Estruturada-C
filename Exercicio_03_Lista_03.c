#include<stdio.h>
#include<stdlib.h>

//Chame a funcao struct e de um dominio para ela
struct ex
{
//Apos chamar a funcao, determine as variaveis que serao utilizadas dentro dela

    int inteiro;
    char string[10];
//E por fim de um nome para seu registro, esse nome sera utilizado para chamar ela na funcao main e outras.

}exemplo[3];

int main(void)
{
    //Para chamar seu registro, digite o nomeDele.NomeDaVariavel, nesse mesmo modelo, segue exemplo:
    exemplo[1].string[10]="Gabriel";
    exemplo[2].inteiro=123;
    exemplo[3].string[10]="Matias";
    //Desse modo pode se atribuir valores para seu registro
    //A parti de agora pode manipular o registro como se fosse uma variavel composta
    printf("%s\n", &exemplo[1].string);
    printf("%s\n", &exemplo[2].inteiro);
    printf("%s\n", &exemplo[3].string);
    return 0;
}
