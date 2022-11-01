#include <stdio.h>
#include<stdlib.h>
#include <locale.h>

union tipoU
{
    short int x; //16 bits e o char 8 bits = UNION reserva o maior para si (16).
    unsigned char c;
};

struct tipoS
{
    short int x; // 16 bits e o char 8 bits =   STRUCT soma os bits (24)
    unsigned char c;
};

int main()
{
    //Struct: espaço para armazenar todos os seus elementos

    struct tipoS v;
    v.x = 5;
    v.c = 'a';

    printf("x = %d\n", v.x);
    printf("c = %c\n", v.c);

    //Union: espaço para armazenar apenas o maior elemento - Memória compartilhada

    union tipoU s;
    s.x = 5;
    s.c = 'a';

    printf("x = %d\n", v.x);
    printf("c = %c\n", v.c);




}

