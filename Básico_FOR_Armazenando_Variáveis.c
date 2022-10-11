#include<stdlib.h>
#include<stdio.h>
#include <locale.h>


int main()
{

setlocale(LC_ALL, "Portuguese");
int i, vetA[10];

for (i=0; i<=9; i++){
    printf("Insira o número %d:", i);
    scanf("%d", &vetA[i]);
}
for (i=0; i<=9; i++){
    printf("%i - ", vetA[i]);
}
}
