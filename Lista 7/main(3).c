
#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Insira tres numeros:\n ");
    scanf("%d %d %d", &a,&b,&c);
    
       if(a>b && a>c)
       {
               printf("a:%d \n", a);
       }
        
        
        else if(b>a && b>c)
            {
               printf("b:%d \n", b);   
            }
            
        else if(c>a && c>b)
        {
            printf("c:%d \n", c);
        }
        
        else    
    {
        printf("Seus numeros sao iguais. \n ");
    }
            
}

