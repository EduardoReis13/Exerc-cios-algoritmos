#include<stdio.h>
main()
{

    int i,j;
    int m[2][2];
    int soma=0;
    int soma2=0;


    for (i=0;i<2;i++)
        for(j=0;j<2;j++)
        {
            printf("Entre com os elementos da matriz:\n ");
            scanf("%d", &m[i][j]);

        if (i==j)
        {soma=soma+ m[i][j];

        }

        if (j==2-1-i)
            {
                soma2=soma2+ m[i][j];

            }

        }
            printf("A soma 1 eh:%d\n ",soma);
            printf("A soma 2 eh:%d\n", soma2);



}





