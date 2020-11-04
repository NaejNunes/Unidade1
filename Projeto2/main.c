#include <stdio.h>
#include <stdlib.h>

int main()
{
    //decisão
    int idade = 5;

    /*
    //Simples
    //if(Condicao)
    //true e false

    //Composta
    printf("Verifica Idade:\n");

    if(idade > 18 && idade < 120)
        printf("Maior");
    else if (idade >= 120 || idade <= 0)
        printf("Idade Invalida");
    else
        printf("Menor");

        //Aninhada
        if(idade >= 0)
        {
            if(idade < 120)
                printf("Maior");
            else
                printf("Idade Invalida");

        if(idade < 18)
            printf("Menor");
        }
        */
        //Estrutura de repeticao
        int contador = 0;
        for(contador = 0; contador< 10; contador++)
        {
            printf("\n %d",contador);
        }
    return 0;
}
