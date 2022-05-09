#include <stdio.h>

int
main(){

    char nome[30];
    int idade,preco;
    printf("Entre com o nome.\n");
    scanf("%s",nome);

    printf("Entre com a idade.\n");
    scanf("%d",&idade);

    if (idade <= 10){
        preco = 30;
    }
    if ((idade > 10) && (idade <= 29)){
        preco = 60;
    }
    if ((idade > 29) && (idade <= 45)){
        preco = 120;
    }
    if ((idade > 45) && (idade <= 59)){
        preco = 150;
    }
    if((idade > 59) && (idade <= 65)){
        preco = 250;
    }
    if(idade > 65){
        preco = 400;
    }
    printf("NOME : %s\n",nome);
    printf("Valor do plano: %d R$\n",preco);

}
