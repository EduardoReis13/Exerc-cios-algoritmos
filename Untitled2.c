#include <stdio.h>

int main()
{
  int idade, sexo;
  int cont=0;
  float media, soma;
  int idade_M=0;
  int idade_F=0;
  int soma_F=0;
  int soma_M=0;

  do
  {
    printf("\nDigite seu sexo.\n 0 para Masculino, 1 para Feminino: ");
    scanf("%d", &sexo);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if(sexo==1 && idade>=30 && idade<=45)
    {
        soma_F++;
        idade_F+=idade;
    }
    if(sexo==0)
    {
        soma_M++;
        idade_M+=idade;
    }
    cont++;

  }while(idade!=0);
  cont--;

  media=(idade_M+idade_F)/cont;
  printf("\n\nA media da idade entre as pessoas eh: %.2f \n ", media);
  printf("A soma total de mulheres entre 30 e 45 anos eh: %d\n", soma_F);
  printf("A soma total de pessoas masculinas eh: %d\n", soma_M);
}
