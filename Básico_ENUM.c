#include <stdio.h>
#include<stdlib.h>
#include <locale.h>



enum exemplo{item1 = 2, item2, item3=200, item4}; //com isso a sequencia da lista começa com 2 e continua. Pode incrementar fora da ordem, atribuindo outro valor maior para o item 3
//enum componentes(rtransistor,capacitor,resistor,diodo,)

int main (int argc, char *argv[])
{
    setlocale(LC_ALL, "Portuguese");

    printf("%d\n", item1);
    printf("%d\n", item2);
    printf("%d\n", item3);
    printf("%d\n", item4);

}
