#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()

{

    setlocale(LC_ALL, "Portuguese");
    float nota;

    printf("Digite sua m�dia:\n");
    scanf("%f", &nota);

    if (nota >=7)
    {
        printf("Aprovado por m�dia!");
    }
    else
    {
        printf("Aluno na final!");
    }

}
