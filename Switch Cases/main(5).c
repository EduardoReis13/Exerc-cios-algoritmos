
#include <stdio.h>

int main()
{
    float n1,n2;
    int op;
    
        printf("Insira dois valores:\n ");
        scanf("%f %f" , &n1,&n2);
        
        printf("Escolha sua operacao:\n ");
        scanf("%d", &op);
        
        switch(op)
        {
            case 1: 
                printf("Resultado da soma:%.2f \n",n1+n2);
            break;
            
            
            case 2:
                printf("Resultado da subtracao:%.2f \n", n1-n2);
            break;
                
                
            case 3:
                printf("Resultado da multiplicacao:%.2f \n", n1*n2);
            break;
            
            case 4:
                printf("Resultado da divisao:%.2f \n", n1/n2);
            break;
            
            default:
                printf("Opcao invalida.");
                
            
            
            
            
        }
    
    
}
