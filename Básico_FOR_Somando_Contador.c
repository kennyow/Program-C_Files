#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()

{

setlocale(LC_ALL, "Portuguese");
int soma = 0, cont;

for (cont = 1; cont < 10; cont++)
{
soma += cont;
printf("Soma: %d\n", soma);

}

printf("Resultado: %d", soma);
}
