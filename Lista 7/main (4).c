
#include <stdio.h>
#include<math.h>

int main()
{ float n1;
   printf("Insira um numero:\n ");
   scanf("%f", &n1);
   
   float n2;
    printf("Insira outro numero:\n ");
    scanf("%f", &n2);
        if(n1>n2){
            printf("O %0.f valor eh maior", n1);
        }
        if(n2>n1){
            printf("O %0.f valor eh maior", n2);
        }
        
        else{
            printf("O dois valores sao iguais");
        }

        
    
}
