
#include <stdio.h>

int main()
{
    char letra;
    printf("Insira uma letra:\n");
    scanf("%c",&letra);

    if (letra=='a'){
        printf("Sua letra e A");
    }

    else if (letra=='b'){
        printf("Sua letra e B");
    }

    else if (letra=='c'){
        printf("Sua letra e C");
    }

    else {
        printf("Letra desconhecida");
    }
}
