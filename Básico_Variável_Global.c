#include <stdio.h>

void quadrado(int num) {
num = num*num;
printf("quadrado eh %d\n", num);
}
int main() {
int x=10;
printf("ANTES::valor de x eh %d\n", x);
quadrado(x);
printf("DEPOIS::valor de x eh %d\n", x);
}
