#include <stdio.h>
#include <locale.h>
#include <string.h>

int main()

{

setlocale(LC_ALL, "Portuguese");

char nome1[30], nome2[30];

printf("Digite um nome: \n");
scanf("%s", nome1);

printf("Digite um nome 2: \n");
scanf("%s", nome2);


printf("%Os nomes emendados fica %s", strcat(nome1, nome2));
}




