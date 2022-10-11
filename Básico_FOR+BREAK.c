#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()

{

setlocale(LC_ALL, "Portuguese");
int i;

for (i = -10; i <=10; i++)
{
if (i == 0){
    break;}
//pode colocar o continue, que ele irá até o 10 mas não mostrará o zero (pula o zero).
printf("%d", i);
}
}
