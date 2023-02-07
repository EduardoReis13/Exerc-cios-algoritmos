#include<stdio.h>
#include<string.h>

char nome[10][80];
char aux[80];


    void ordena(){
        int x,y;
        for(x = 0; x<=9; x++){
            for(y = x+1; y<=9; y++){
            
            if (strcmp(nome[x], nome[y]) > 0 ) {
              strcpy(aux,nome[x]);
              strcpy(nome[x],nome[y]);
              strcpy(nome[y], aux);
                      
                    }
                
            }
        }
        
    }



int main()
{
    int x;
        printf("Insira 10 nomes:\n");
         for(int x = 0; x<= 9; x++){
             scanf("%s ",nome[x]);
         }
         
         ordena();
         
          printf("NOMES ORDENADOS:\n");
        for(x=0; x<=9; x++){
            puts(nome[x]);
            
        } 
         
}
