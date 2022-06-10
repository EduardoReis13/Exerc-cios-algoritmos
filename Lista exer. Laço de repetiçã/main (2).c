#include<stdio.h>
#include<math.h>
    int main()
{
   float crescimento_a,crescimento_b , pop_a,pop_b, anos;
   crescimento_a= 1.03;
   crescimento_b= 1.02;
   pop_a= 5000000;
   pop_b=7000000;
   
    
    while(1)
    {
        if (pop_a>pop_b)
        {
            break;
        }
     pop_a= crescimento_a*pop_a;
     pop_b=crescimento_b*pop_b;
     anos++;
    
    }
        printf("Faltara :%.2f anos \n para o pais A ultrapassar o B. ", anos);

}

