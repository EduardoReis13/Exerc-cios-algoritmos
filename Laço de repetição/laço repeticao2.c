#include<stdio.h>
int main()
{
    int contador;
    float valor, soma, media;

    contador=0;
    soma=0;


        while(contador<100)
        {
            printf("Entre com um valor:\n ");
            scanf("%f", &valor);
            soma= soma+valor;
            contador= contador+1;

        }
            media= soma/contador;
            printf("A soma eh %.2f \n", soma);
            printf("A media eh %.2f \n ", media);


    }

