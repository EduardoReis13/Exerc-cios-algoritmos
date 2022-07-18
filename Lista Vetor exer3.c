#include<stdio.h>

main()
{
int A[6];
int B[6];
int i;

for(i=0;i<6;i++)
    {
        printf("Entre com os numeros  para o conjunto A :\n ");
        scanf("%d", &A[i]);

        if(A[i]%2==0)
        {
           B[i] = A[i] + 20;
        }

        else
            B[i]= A[i] *3;



    }

       for(i=0;i<6;i++)
       {
            printf("O conjunto B eh: %d\n", B[i] );
       }

}
