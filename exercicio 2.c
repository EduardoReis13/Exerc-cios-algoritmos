#include<stdio.h>
#include<conio.h>


int main()
{

 int  *ptr;
 int var;
 int **pont;

  printf("Digite uma variavel:\n");
  scanf("%d", &var);

  ptr = &var;
  pont = &ptr;

  printf("sua var eh:%d",*ptr);

}
