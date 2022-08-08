#include<stdio.h>
main()
{
    int i,j;
    int A[2][2];
    float div[i][j];
    int maior=0;

     for (i=0;i<2;i++)
        for(j=0;j<2;j++)
        {
            printf("Entre com os elementos da matriz:\n ");
            scanf("%d", &A[i][j]);
        }

     for(i=0;i<2;i++)
         for (j=0;j<2;j++)
     {
         if (i==j)
         {
             if (A[i][j] > maior)
             {
                 maior= A[i][j];
             }
         }
     }

      for (i=0;i<2;i++)
        for(j=0;j<2;j++)
        {
            div[i][j]= A[i][j] /maior;

        }
      for (i=0;i<2;i++)
        for(j=0;j<2;j++)
        {
            printf("matriz A:%d\n ", A[i][j]);
            printf("matriz B:%d\n ", div[i][j]);
        }

        printf("Maior eh:\n %d", maior);


}
