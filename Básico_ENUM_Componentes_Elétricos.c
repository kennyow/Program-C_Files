#include <stdio.h>
#include<stdlib.h>
#include <locale.h>

//convertendo a numeração abaixo nas strings do char
enum componentes{transistor, capacitor, resistor, diodo, mcu};

char matriz[][20] =
{
    "transistor",
    "capacitor",
    "resistor",
    "diodo",
    "mcu"
};

int main (int argc, char *argv[])
{
    setlocale(LC_ALL, "Portuguese");

    enum componentes referencia;

    for(referencia = transistor; referencia <= mcu; referencia++)
    {
        printf("%s\n", matriz[referencia]);
    }

}
