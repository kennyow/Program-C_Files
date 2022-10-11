#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()

{

    setlocale(LC_ALL, "Portuguese");
    int mes;

    printf("Digite o número do mês:\n");
    scanf("%i", &mes);

    if (( mes == 1) || (mes == 3) || (mes==5) || (mes==7) || (mes==8) || (mes==10) || (mes==12) )

    {
        printf("tem 31 dias");
    }
    if ( (mes==4) || (mes==6) || (mes==9) || (mes==11) )
    {
        printf("tem 30 dias");
    }
    if (mes==2)
    {
        printf("tem 28 dias");
    }

}
