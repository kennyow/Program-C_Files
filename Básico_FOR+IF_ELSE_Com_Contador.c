
#include<stdio.h>
#include <locale.h>

int main()

{

setlocale(LC_ALL,"portuguese");

int i,y=0;
 printf("aperte qualquer tecla para come�ar ! \n");
 getchar();
for(i=-10;i<10;i++){
if (i==0){
 break;}
 printf("Itera��o %d\n",i);
 y++;
}
printf("o la�o rodou %d vezes\n",y);
}
