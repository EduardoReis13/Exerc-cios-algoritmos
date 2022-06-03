
#include <stdio.h>

int main()
{
 int maca;
    printf("BEM VINDO AO MERCADO DO CLEITON \n");
 
  printf("Quantas macas voce quer?:\n ");
  scanf("%d", &maca);
  
  
  
  float valor;
    if(maca<12)
    {
        printf("Valor:\n %.2f", (float) maca*0.3);
    }
    else if(maca>=12)
    {
        printf("Valor:\n %.2f", (float) maca*0.25 );
    }
    
    
    
}

