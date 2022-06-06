#include<stdio.h>
int main()
{


    int superior, num, soma;

    soma=0;

            printf("Entre com um numero:\n ");
            scanf("%d", &num);
            printf("Entre com o limite superior: \n");
            scanf("%d", &superior);
        while(num<=superior)
            {
               if(num % 2 ==1)
               soma= soma+num;
               num= num+1;
            }

         printf("somatorio: \n %d", soma);
}
