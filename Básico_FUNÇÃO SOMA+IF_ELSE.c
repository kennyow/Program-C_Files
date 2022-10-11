#include<stdlib.h>
#include<stdio.h>
#include <locale.h>

float media(float num1, float num2) {

float res;
res = (num1 + num2) /2;

return res;
}

int main()
{
setlocale(LC_ALL, "Portuguese");

float n1, n2, med;

printf("Digite nota 1:\n");
scanf("%f", &n1);
printf("Digite nota 2:\n");
scanf("%f", &n2);

med = media(n1,n2);

if (med >= 7) {
    printf("Aluno aprovado por média com %f!", med);
}
else
{
    printf("Aluno na final com média %f!", med);
}

}
