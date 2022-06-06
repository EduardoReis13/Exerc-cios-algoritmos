#include<stdio.h>
int main()
    {
        char resp;
       
        printf("Voce deseja efetuar a conta?: \n ");
        scanf("%c", &resp);
        
         int a, b,P;
            while(resp=='s')
            
            {
    
                printf("Insira o valor de A e B:\n ");
                scanf("%d %d", &a, &b);
                P= a+b;
                
                    printf("O valor de P eh:%d \n ", P);
                    
                    printf("Deseja continuar? S/N. \n ");
                        scanf("\n%c", &resp);
                    
                    
                
                
            }
        
        
        
        
        
        
        
        
        
        
        
    } 

    
 
