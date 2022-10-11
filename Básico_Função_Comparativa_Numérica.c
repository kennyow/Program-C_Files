#include<stdlib.h>
#include<stdio.h>
#include <locale.h>


int compare(int a, int b, int c)
{
int resp;
char resp1;
if ((a > b) && (a> c)){
    resp = a;
    return resp;
}
if ((b > a) && (b> c)){
    resp = b;
    return resp;
}
if ((c > a) && (c> b)){
    resp = c;
    return resp;
}
if ((a > b) && (b < c)){

    if (c > a){
    resp = c;
    return resp;
    }

    if (c < a){
    resp = a;
    return resp;
    }
    if (c = a){
    resp = a;
    return resp;
    }
}


if (c = a = b){
    resp = b;
    return resp;
}
}

int main()
{
setlocale(LC_ALL, "Portuguese");

int x, y, z;

printf("Digite o primeiro número inteiro:\n");
scanf("%d", &x);
printf("Digite o segundo número inteiro:\n");
scanf("%d", &y);
printf("Digite o terceiro número inteiro:\n");
scanf("%d", &z);

printf("O maior número inteiro entre %d, %d e %d é %d:\n", x, y, z, compare(x, y, z) );
}
