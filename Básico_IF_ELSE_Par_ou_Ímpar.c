#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()

{

    setlocale(LC_ALL, "Portuguese");
    int num;

    printf("Insire um n�mero inteiro qualquer:\n");
    scanf("%i", &num);

    if (num%2 == 0)
    {
        printf("O n�mero %i � PAR!", num);
    }
    else
    {
        printf("O n�mero %i � �MPAR!", num);
    }

}
