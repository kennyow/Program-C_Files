#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()

{


    setlocale(LC_ALL, "Portuguese");
    float n1, n2, media;
    char resp;

    while (resp != 'n') {
    //Nota Digitada se usa a v�rgula, e n�o o ponto
    printf("Digite a primeira nota:\n");
    scanf("%f", &n1);

    printf("Digite a segunda nota:\n");
    scanf("%f", &n2);

    media = (n1+n2)/2;

    printf("A m�dia do aluno foi %.2f.\n", media);

    printf("Deseja continuar? S/N\n");
    scanf("%s", &resp);

    }

    printf("Obrigado!");




    }





