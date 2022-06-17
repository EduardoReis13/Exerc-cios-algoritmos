#include<stdio.h>
main ()
{
	int alunos, notas, notas2,cont=0;
	float media;
	printf ("de o numero de alunos\n");
	scanf ("%d", &alunos);
	while (cont<alunos){
	printf ("diga as notas dos seus alunos\n");
	scanf ("%d", &notas);
	notas2=notas2+notas;
	cont=cont+1;
	}
media=notas2/cont;
printf ("a media dos alunos eh:\n%f", media);
}
