#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()

{

    setlocale(LC_ALL, "Portuguese");
    float nota;

    printf("Digite sua média:\n");
    scanf("%f", &nota);

    if (nota >=7)
    {
        printf("Aprovado por média!");
    }
    else
    {
        printf("Aluno na final!");
    }

}
