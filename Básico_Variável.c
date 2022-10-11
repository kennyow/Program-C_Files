#include <stdio.h>
#include <locale.h>

int main()

{

setlocale(LC_ALL, "Portuguese");

float media[10], nota;

media[3] = 9;

nota = media[3];

printf("A nota é %.2f", nota);




}
