#include <stdio.h>
#include <stdbool.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    //aceitar acentuacao nmmo prompt
    setlocale(LC_ALL, "Portuguese");

    char str[] = "Oi";

    printf("\n Valor atual: %s", str);

    printf("\n Maiúscula : %s", strupr(str));
    printf("\n Minuscula: %s", strlwr(str));

    printf("\n Tamanho: %i", strlen(str));

    printf("\n Substituir valores: %s", strcpy(str,"Teste 2"));
    printf("\n Comparar: %i \n 0 para igual e qualquer outro numero para diferente", strcmp("Teste 2",str));
    printf("\n Substituir valores colocando posicao: %s", strncpy(str,"ROLFI",2));

    strcpy(str, "teste");

    printf("\n Concatenar : %s", strcat(str, "5"));
    return 0;
}
