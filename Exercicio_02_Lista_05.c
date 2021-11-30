#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct equip
{
  char equipamentos[30]
}equipa[5];

int main(void)
{

  for (int i = 0; i < 5; i++)
  {
      printf("Digite o nome do [%i] equipamento: \n", i);
      scanf("%s", &equipa[i].equipamentos);
  }

  for (int i = 0; i < 5; i++)
  {
      for (int j= 0; j < 30; j++)
      {
        if (i!=j)
        {
            if (strcmp(equipa[i].equipamentos, equipa[j+1].equipamentos)==0)
            {
                printf("NOME DUPLICADO ENCONTRADO!\n");
                printf("%s\n", equipa[i].equipamentos); 
            }
        }

      }
  }
  return 0;
}