#include<stdio.h>
void main()
{
int secs=0;
float massa;
int min=0;
int hora=0;
printf("digite a massa do material\n");
scanf("%f",& massa);

while(massa>0.5)
{
    massa= massa*0.5;
    secs +=50;
    if (secs >60)
{
    secs -=60;
    min += 1;
}
if(min >60)
{
   min -=60;
    hora += 1;

}

}
printf("levara %d horas %d minutos e %d segundos para massa chegar a 0.5 g",hora,min,secs);

}
