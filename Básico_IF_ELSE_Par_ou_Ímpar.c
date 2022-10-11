#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()

{

    setlocale(LC_ALL, "Portuguese");
    int num;

    printf("Insire um número inteiro qualquer:\n");
    scanf("%i", &num);

    if (num%2 == 0)
    {
        printf("O número %i é PAR!", num);
    }
    else
    {
        printf("O número %i é ÍMPAR!", num);
    }

}
