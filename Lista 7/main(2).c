
#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Insira tres numeros:\n ");
    scanf("%d %d %d", &a,&b,&c);
    
        if(a<b && a<c)
        {
            printf("a: %d \n ",a);
            if(b<c){
                printf("b: %d \n c %d:\n",b,c );
                
            }
            else 
            {
                printf("c: %d \n b:%d\n",c,b);
            }
        }    
            
        else if(b<a && b<c)
        {
            printf("b: %d \n ",b);
            if(a<c){
                printf("a: %d \n c %d:\n",a,c );
                
            }
                else
            {
                printf("c: %d \n b:%d\n",c,a);
            }
            
    
            
        }
        
        else if(c<a && c<b)
        {
            printf("c: %d \n ",c);
            if(b<a){
                printf("b: %d \n a %d:\n",b,a );
                
            }
                else
            {
                printf("a: %d \n b:%d\n",a,b);
            }
            
    
            
        }
}

