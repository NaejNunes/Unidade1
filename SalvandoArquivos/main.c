#include <stdio.h>
#include <stdlib.h>

int main()
{
   FILE * arq;
   arq = fopen("C:\\Users\\JeanN\\Documents\\RepositoriosCC\\arq.txt", "w");

   if(arq == NULL)
        printf("Erro na abertura do arquivo \n");
   else
        printf("Arquivo aberto com sucesso!");
   return 0;
}
