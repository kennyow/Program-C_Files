#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()


{
    setlocale(LC_ALL, "Portuguese");
    char carac;

    printf("Digite um nome que eu digo qual a primeira letra:\n");
    carac = getchar();

    printf("A primeira letra digitada é %c.", carac);

}
