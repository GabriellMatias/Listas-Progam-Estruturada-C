#include<stdio.h>
#include<math.h>

void verificar(int tot);
void calcula(int *valor);

int main(void)
{
    int valor[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Digite o %i valor: ", i);
        scanf("%i", &valor);
        fflush(stdin); 
    }
    calcula(valor);
    
    return 0;
}
void calcula(int *valor){
    int total;

    total = (valor[0]*valor[1]*valor[2]);
    fflush(stdin);
    verificar(total);
}
void verificar(int tot){
    
    fflush(stdin);
    if (tot % 2 == 0)
    {
        printf("O total %i e par\n", tot);
    } else printf("O total %i e impar\n", tot);
    
}
