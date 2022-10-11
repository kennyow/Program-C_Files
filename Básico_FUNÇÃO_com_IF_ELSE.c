#include <stdio.h>
#include <locale.h>

int z = 10;

int maior(int x, int y) {
    int oMaior;
    if (x >=y){
        oMaior = x;
    } else {
        oMaior = y;
    }

    return oMaior;
}


int main()

{
    setlocale(LC_ALL, "Portuguese");
    int b = 5;
    printf("O maior entre %d e %d é %d", z, b, maior(z,b));

}
