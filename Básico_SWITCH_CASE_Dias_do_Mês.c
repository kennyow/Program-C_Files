#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()

{
    setlocale(LC_ALL, "Portuguese");
    int mes;

    printf("Digite o número do mês:\n");
    scanf("%i", &mes);

    switch(mes) {

    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("O mês %i tem 31 dias", mes);
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("O mês %i tem 31 dias", mes);
        break;
    case 2:
        printf("O mês %i tem 28 dias", mes);
        break;


}
}
