#include<stdio.h>
#include<conio.h>

main()
{
    int N,aa,I;//Declara��o de variaveis

    printf("Entre com um ano");
    scanf("%d",&N);
    printf("Entre com o ano atual");
    scanf("%d",&aa);

    I= aa-N;

    printf("\n A idade desta pessoa �:%d",I);

    getch();
}
