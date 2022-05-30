#include<stdio.h>
#include<conio.h>
 main()
 {
    int pp,pt,op;

    printf("digite 1 para Descoberto:\n" );

    printf("digite 2 para Padawan:\n" );

    printf("digite 3 para Cavaleiro Jedi:\n" );

    printf("digite 4 para Mestre Jedi:\n" );


    scanf("%d",&op);
    switch(op)
{
  case 1:
        printf("Descoberto" );
   break;

  case 2:
         printf("Padawan" );
   break;

   case 3:

         printf("Cavaleiro Jedi" );
    break;

   case 4:
         printf("Mestre Jedi" );
    break;
}

 }
