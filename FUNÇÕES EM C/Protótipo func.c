#include<stdio.h>
#include<conio.h>

intCalculaFatorial(int x);


void  main()
{
    int num, fatorial;

    printf("Entre com um numero:\n ");
    scanf("%d", &num);

    fatorial= CalculaFatorial(num);

    printf("Fatorial %d", fatorial);



    getch();


    }

int CalculaFatorial (int x){
int cont, fat;

    fat= 1;
    for (cont=1;cont<=x;cont++)

        fat= fat *cont;
        return (fat);







}
