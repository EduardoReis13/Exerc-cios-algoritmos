#include<stdio.h>
main()
{
	int mercadorias, valor, cont=0, valor2=0, media;
	printf ("diga quantas mercadorias tem nos estoque:");
	scanf ("%d",&mercadorias);
	while (cont<mercadorias)
	{
		printf ("de o valor de cada mercadoria:");
		scanf ("%d",&valor);
		valor2=valor2+valor;
		cont=cont+1;
	}
media=valor2/cont;
printf ("o valor total das mercadorias eh:%d\n", valor2);
printf ("a media de valor das mercadorias eh:%d\n", media);
}
