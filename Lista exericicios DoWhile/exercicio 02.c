



#include <stdio.h>
#include <math.h>

int main()
{
    int idade;
    char sexo;
    float salario;
    float media=0;
    float maior, menor;
        int quantia_femea=0;
        int contador=0;
        
    do
    {
        printf("Escreva sua idade: \n ");
        scanf("%d", &idade);
        
        printf("Escreva seu sexo: \n ");
        scanf("\n%c", &sexo);
        
        printf("Escreva seu salario:\n ");
        scanf("%f", &salario);
        
        media +=salario;
        contador+= 1; 
        
        if (isnan(maior))
        {
            maior=idade;
            menor=idade;
        }
        if (idade>maior)
        {
            maior=idade;
        }
        if (idade<menor)
        {
            menor=idade;
        }
        
        
      }while(idade>= 0);
    
    
}
