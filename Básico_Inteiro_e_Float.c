#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()

{
    setlocale(LC_ALL,"Portuguese");
    int numero;
    float nota;

    printf("digite um valor:\n");
    scanf("%d", &numero);
    //média colocada com vírcula entre nos números.
    printf("digite uma media:\n");
    scanf("%f", &nota);

    printf("A nota é inteira no valor de %d\n", numero);
    printf("A média é float no valor de %.2f", nota);

}
