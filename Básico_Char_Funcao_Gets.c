#include <stdio.h>
#include <locale.h>


int main()
{

    setlocale(LC_ALL, "Portuguese");
    //Declara��o de Vari�veis:
    char nome[50];

    printf("Qual � o n�vel arcabou�o do seu nome?\n");
    gets(nome);

    printf("Prazer, %s!", nome);

}
