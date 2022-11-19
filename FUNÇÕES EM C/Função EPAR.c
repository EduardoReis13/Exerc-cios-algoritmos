#include <stdio.h>
#include<stdlib.h>

int EPAR (int x){
    if (x %2 == 0 )
        {
            return 1;
        }
    else {
        return 0;
    }    
    
}

int main() {
    
 int num;
 
    printf("Digite um numero:\n ");
    scanf("%d", &num);
    
    if (EPAR(num)== 1)
    {
        printf("O numero eh par\n");
        
    }
    else{
        printf("Eh impar\n");
    }
    
    
   
}
