#include <stdio.h>
#include <stdlib.h>
#include <locale.h> // colocar acentuacao no prompt
#include <stdbool.h>
#include <string.h>

struct pessoa
{
    char nome[50];
    char email[80];
};

int main()
{
    struct pessoa p1;

    printf("\n=== Cadastro de Usuario ===\n");

    printf("Nome :");
    scanf("%s%*c", &p1.nome);

    printf("Email: ");
    //ffLush stdin para Ler o teclado e fgets() para atribuir na string
    fflush(stdin);
    fgets(p1.email,80,stdin);

    printf("\n === IMPRIMINDO === \n");
    printf("\n Nome:");

    puts(p1.nome);
    printf("\n Email : %s", p1.email);
    printf("Hello world!\n");

    getch();
    return 0;
}
