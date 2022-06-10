
#include<stdio.h>
#include<math.h>
    int main()
{ 
    
  float num;
  float valor_maior=0;
  
    while(1)
    {
        printf("digite um numero:\n ");
        scanf("%f", &num);
        
        if(num<=0)
        {
            break;
        }
        
        if(num>valor_maior)
        {
            valor_maior=num;
        }

        
        
    }

    printf("Seu maior valor eh:\n %.0f", valor_maior);



}
