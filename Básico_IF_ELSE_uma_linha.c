#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()

{

    setlocale(LC_ALL, "Portuguese");
    int media;

    printf("Digite a sua m�dia:\n");
    scanf("%i", &media);


    (media >=7) ? printf("Aprovado\n") : printf("Reprovado\n");


}
