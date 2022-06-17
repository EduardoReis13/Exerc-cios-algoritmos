#include<stdio.h>
main ()
{
	int cont=0, cont2=0, pessoas90=0, idade2=0;
	int idade, peso;
	float media;
	while (cont<3)
	{
		printf ("diga a sua idade:\n");
		scanf ("%d",&idade);
		printf ("diga seu peso:\n");
		scanf ("%d",&peso);
		if (peso>90)
		{
			pessoas90=pessoas90+1;
		}
		cont=cont+1;
	if (idade)
	idade2=idade2+idade;
	}
	media=idade2/3;
	printf ("a quantidade de pessoas com mais de 90 quilos eh:%d", pessoas90);
	printf ("\na media de idades eh:%f", media);
}
