#include<stdlib.h>
#include<stdio.h>
#include <locale.h>


int main()
{

setlocale(LC_ALL, "Portuguese");
int i;
int ar[] = {4, 5, 8, 9, 8, 1, 0, 1, 9, 3};


for (i=0; i<=9; i++){
    printf("%i - ", ar[i]);
}
}

