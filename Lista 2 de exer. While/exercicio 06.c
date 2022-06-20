#include <stdio.h>

int main()
{
    int cod, cont=0;
    float maior=0, preco, soma=0, media;

     while(cont<2)
    {
        printf("diga o codigo do produto:\n  ");
            scanf("%d", &cod);

        printf ("Diga o preco do produto:\n ");
            scanf("%f", &preco);

        if (preco>maior)
            maior=preco;

        cont=cont+1;
        soma=soma+preco;

    }

        media= soma/cont;

        printf("\n O maior numero:%.2f", maior);
        printf("\n A soma dos precos eh:%.2f", soma);
}
