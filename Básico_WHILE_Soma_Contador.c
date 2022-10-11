#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()

{

setlocale(LC_ALL, "Portuguese");
int soma = 0, cont = 1;

while (cont < 10) {
    soma += cont;
    cont += 1;
}
printf("Resultado: %d", soma);
}
