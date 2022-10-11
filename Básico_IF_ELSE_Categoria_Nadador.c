#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()

{

    setlocale(LC_ALL, "Portuguese");
    int ano, id;

    printf("Insira o ano do seu nascimento:\n");
    scanf("%i", &ano);

    id = 2022 - ano;

    printf("Nadador de idade %i é da categoria ", id);

    if ((id >= 5) && (id <= 7))
    {
        printf("INFANTIL A");
    }
    if ((id >= 8) && (id <= 10))
    {
        printf("INFANTIL B");
    }
    if ((id >= 11) && (id <= 13))
    {
        printf("JUVENIL A");
    }
    if ((id >= 14) && (id <= 17))
    {
        printf("JUVENIL B");
    }
    if (id >17)
    {
        printf("SÊNIOR");
    }

}
