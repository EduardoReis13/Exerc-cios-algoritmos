#include<stdio.h>

main()

{
    int v[8];
    int i;
    int cont2=0;

    for(i=0;i<8;i++)
    {
        printf("Entre com oito numeros:\n ");
        scanf("%d", &v[i]);

        if(v[i]%6==0)
            {
           cont2++;
            }

    }
    printf("Os multiplos de deles sao:\n %d", cont2);

}
