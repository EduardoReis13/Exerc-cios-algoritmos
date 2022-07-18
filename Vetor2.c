#include<stdio.h>

main()
{

     int v[10], i;

     for(i=0;i<10;i++)
     {
         printf("Escreva 10 notas:\n ");
         scanf("%d", &v[i]);



     }


    for(i=0;i<10;i++)
     {
         printf("A primeira nota %d\n", v[0]);
         printf("A ultima nota %d \n", v[9]);



     }


}
