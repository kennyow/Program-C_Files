#include <stdio.h>
#include <locale.h>
#include <string.h>

int main()

{

setlocale(LC_ALL, "Portuguese");

char vet[100];
int tam;

printf("Digite um nome: \n");
scanf("%s", vet);

tam = strlen(vet);



printf("O nome %s tem %i caracteres!\n", vet, tam);




}
