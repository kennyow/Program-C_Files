#include <stdio.h>

void quadradoRef(int *num) {
*num = (*num) * (*num);
printf("quadradoRef eh %d\n", *num);
}

int main()
{
int x=10;
printf("ANTES::valor de x eh %d\n", x);
quadradoRef(&x);
printf("DEPOIS::valor de x eh %d\n", x);
}
