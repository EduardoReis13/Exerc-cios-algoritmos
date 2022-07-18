#include<stdio.h>

main()

//Vai mostrar o indice e nao elemento//
{
    float v[10];
    int  i;
    for(i=0;i<10;i++)
    {
        printf("\n Entre com os numeros:\n ");
        scanf("%f", &v[i]);

    }

     for(i=0;i<10;i++)
    {
        if(i%2==0)
            {
                printf("\n O numero na posicao par:%0.f", v[i]);

            }
    }








}
