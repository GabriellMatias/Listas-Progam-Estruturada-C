#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int vetor[3] = {1, 23, 2};
    int *pont;

    for (int i = 0; i < 3 ; i++)
    {
        pont = &vetor[i];
        printf("%i\n", *pont);

    }
    system("Pause");

    return 0;
}
