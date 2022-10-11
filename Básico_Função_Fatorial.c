#include<stdlib.h>
#include<stdio.h>
#include <locale.h>


int fat(int num)
{
if(num==0)
return 1;
else
return num * fat(num-1);
}

int main()
{

setlocale(LC_ALL, "Portuguese");
int x=5, c;
c = fat(x);
printf("Fatorial de %d é %d.", x, c);
}
