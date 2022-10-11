#include <stdio.h>
#include <locale.h>


int main()
{

    setlocale(LC_ALL, "Portuguese");
    //Declaração de Variáveis:
    char nome[50];

    printf("Qual é o nível arcabouço do seu nome?\n");
    gets(nome);

    printf("Prazer, %s!", nome);

}
