#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()

{

setlocale(LC_ALL, "Portuguese");
char resp;
float n1, n2, med;


do {

printf("Digite a nota n1:\n");
scanf("%f", &n1);

printf("Digite a nota n2:\n");
scanf("%f", &n2);

med = (n1+n2)/2;

printf("Média Final = %f\n", med);

printf("Deseja realizar um novo cálculo? s/n\n");
scanf(" %c", &resp);

} while (resp !='n');

printf("Obrigado!");
}



