#include<stdio.h>
main()
{
   int time;
   int estado;
   float salario;
   int cont=0;
   int media_salarial_botafogo;
   int soma=0;
   int op;
   int cont_botafogo=0;
   int cont_salarial_botafogo=0;
   int contFlu;


        for(cont=0; cont<=2; cont++)
    {


   printf("qual seu time do coracao?\n Digite:\n 1-Fluminense \n 2-Botafogo \n 3-Vasco \n 4-Flamengo \n 5-Outros\n");
   scanf("%d", &time);

   if(time==2)
        {
        cont_botafogo++;
        printf("Qual seu salario?\n ");
        scanf("%d", &salario);
        cont_salarial_botafogo++;

       soma= soma+salario;
       media_salarial_botafogo= soma/cont_botafogo;

        }



    }


        {
       printf("Onde voce mora?\n );
       printf("\n Digite 1 para RJ: \n");
       printf("\n Digite 2 para Niteroi: \n");
       printf("\n Digite 3 para outros: \n ");
       scanf("%d", &estado);




       printf("Qual seu salario?: \n");
       scanf("%f", &salario);
       cont++;

        }

        printf("A media salarial dos torcedores do botafogo eh: %d", media_salarial_botafogo)

}
