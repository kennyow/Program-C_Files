#include<stdlib.h>
#include<stdio.h>

float media(float num1, float num2) {
float res;
res = (num1 + num2) / 2;
return res;
}
int main()
{
float a, b, c;
a = 9;
b = 7;
c = media(a, b);
printf("%.2f", c);
}
