#include<stdio.h>
#include <locale.h>

int main()

{

setlocale(LC_ALL,"portuguese");
float soma,sub,prod,div;
float x,y;
int escolha;
char resp;

do{
printf("digite:\n 1 - soma\n 2 - subtra��o\n 3 - produto\n 4 - divis�o\n");
scanf("%d",&escolha);
printf("digite as duas vari�veis: \n");

scanf("%f %f",&x,&y);
switch(escolha){
 case 1:
 printf("Resultado � : %f" ,x+y);
 break;
 case 2:
 printf("Resultado � : %f" ,x-y);
 break;
 case 3:
 printf("Resultado � : %f" ,x*y);
 break;
 case 4:
 printf("Resultado � : %f" ,x/y);
 break;
 default:
 printf("op��o inv�lida");
}
printf("\n\nNovo c�lculo ? s ou n ?\n");
scanf("%*c",&resp);
}while(resp == 's');
}
