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
    //m�dia colocada com v�rcula entre nos n�meros.
    printf("digite uma media:\n");
    scanf("%f", &nota);

    printf("A nota � inteira no valor de %d\n", numero);
    printf("A m�dia � float no valor de %.2f", nota);

}
