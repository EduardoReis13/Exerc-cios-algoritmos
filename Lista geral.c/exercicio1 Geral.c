#include<stdio.h>
#include<string.h>

int main()
{
    int salario, salario_a,salario_b;
    int t_servico;


    printf("Informe seu salario:\n");
    scanf("%d", &salario);

    printf("Informe seu tempo de servico:\n");
    scanf("%d", &t_servico);

    if(t_servico >= 5)
    {
        salario_a= 0.2* salario;
        printf("Seu salario sera %d", salario_a);

    }

    else{
        salario_b = 0.1* salario;
        printf("seu salario tera acrescimo de %d", salario_b);
    }


}
