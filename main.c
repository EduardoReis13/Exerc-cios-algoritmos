
#include <stdio.h>

int main()
{
    float nota_A, nota_B;
    float media,soma, cont=0;
    
    do
{
    
    printf ("qual sua nota A?: \n");
        scanf ("%f", &nota_A);
    
    printf("qual sua nota B?:  \n");
        scanf("%f", &nota_B);
    
soma= nota_A+nota_B;

media= soma/2;
cont=cont+1;

    printf("Sua media eh:%2.f \n", media);
}
    while(cont<5);
    
        

    
}
