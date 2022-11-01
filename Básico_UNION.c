#include <stdio.h>
#include<stdlib.h>
#include <locale.h>


union estrutura01
{
    int inteiro;
    char caractere;

    float decimal;

};

struct estrutura02
{
    int inteiro02;
    char caractere02;

    float decimal02;

};


int main (int argc, char *argv[])
{
    setlocale(LC_ALL, "Portuguese");
    printf("União: %d\n", sizeof(union estrutura01));
    printf("Estrutura: %d\n", sizeof(struct estrutura02));







}
