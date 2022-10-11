#include <stdio.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, "Portuguese");
    int x = 14;
    int y;
    int *p;

    //FAZ PARA RECEBER O ENDEREÇO DE X (APONTAR PARA X)

    p = &x;

    // COLOCA EM Y, O VALOR APONTADO POR P
    y = *p;

    printf("Endereço de x = %p \n", p);
    printf("Valor apontado por p = %d\n", *p);
    printf("Valor de y = %d \n", y);
}
