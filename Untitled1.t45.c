#include<stdio.h>
#include <locale.h>

int main()

{
int ar[] = {10, 15, 4, 25, 3, -4};
int *p = &ar[2];
int a;


a = *p++;
printf("%d", ar);
printf("%d", ar[*p++]);


///printf(p[-1]);
///printf(ar[*p++]);
///printf(*(ar + ar[2]));




}

