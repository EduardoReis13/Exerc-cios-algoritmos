
#include<stdio.h>
#include<math.h>
    int main()
{
    float compras;
    char* nome;
    
    
    printf("Digite seu nome:\n ");
    scanf("%s", nome);
    
    
    for (int i=0; i<15; i++)
    {
        printf("Digite o valor das compras:\n ");
         scanf("%f", &compras);
     
         if
            (compras<1000)
       {
          printf("Voce ganhou um bonus de 10%%, voce ganhou %.2f \n ", compras *0.10);
       }
        else if (compras>1000)
        {
            printf("Voce ganhou um bonus de 15%%, voce ganhou %.2f \n ", compras *0.15);
        }
       
    }


}
