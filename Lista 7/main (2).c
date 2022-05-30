
#include <stdio.h>
#include<math.h>

int main()
{ float n1, divisao;
    printf("Insira um inteiro:\n ");
    scanf("%f", &n1);
  float n2;
    printf("Insira outro inteiro:\n ");
    scanf("%f", &n2);
    
    divisao=n1/n2;
    
        if (n2==0){
            printf("O segundo inteiro eh 0");
        }
        else {
            printf("O seu resultado eh:%.1f \n", divisao );
        }
        

    
}
