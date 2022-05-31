#include <stdio.h>
#include<math.h>

int main()
{
  float ano_nascimento, idade, voto;
    printf("Informe seu ano de nascimento:\n ");
    scanf("%f", &ano_nascimento);
    
  idade= 2022 - ano_nascimento;
  voto= 16 -idade;
  
   printf("Sua idade eh: %0.f", idade);
   
   if(idade>=16){
   printf("\n Voce podera votar este ano");
   }
   
   else{
      printf("\n Invalido. falta: %0.f anos para poder votar", voto);
   }
    
}