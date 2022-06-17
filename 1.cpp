#include<stdio.h>
main ()
{
	int idade, pessoas15, pessoas30, pessoas45, pessoas60, pessoas61, cont=0;
	int p, p1;
	while (cont<15)
	{ 
	printf ("\nola, qual a sua idade?");
	scanf ("%d", &idade);
	cont=cont+1;
	if(idade<=15){
	pessoas15=pessoas15+1;
	}
	if((idade>=16)&&(idade<=30)){
	pessoas30=pessoas30+1;
	}
	if((idade>=31)&&(idade<=45)){
	pessoas45=pessoas45+1;
	}
	if((idade>=46)&&(idade<=60)){
	pessoas60=pessoas60+1;
	}
	if (idade>60){
	pessoas61=pessoas61+1;
	}
	}
	p=pessoas15/15;
	p1=pessoas61/15;
	printf ("\n o numero de pessoas com idade ate 15 anos eh:\n%d", pessoas15);
	printf ("\n o numero de pessoas com idade entre 16 e 30 anos eh:\n%d", pessoas30);
	printf ("\n o numero de pessoas com idade entre 31 e 45 anos eh:\n%d", pessoas45);
	printf ("\n o numero de pessoas com idade entre 46 e 60 anos eh:\n%d", pessoas60);
	printf ("\n o numero de pessoas com idade acima de 60 eh:\n%d", pessoas61);
	printf("\n A porcentagem de pessoas com idade inferior a 15 anos entre todas as idades analisadas eh:\n%d", p);
	printf("\n A porcentagem de pessoas com idade superior a 61 anos entre todas as idades analisadas eh:\n%d", p1);
}
