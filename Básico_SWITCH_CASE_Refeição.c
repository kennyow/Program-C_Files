#include<stdio.h>
#include <locale.h>

int main()

{

setlocale(LC_ALL,"portuguese");
float soma,sub,prod,div;
float x,y;
int escolha;
char resp;


printf("digite sua op��o de refei��o:\n 1 - caf� da manh�\n 2 - almo�o\n 3 - janta\n");
scanf("%d",&escolha);

switch(escolha){
 case 1:
 printf("Cuscuz com Ovo");
 break;
 case 2:
 printf("Prato Feito");
 break;
 case 3:
 printf("Sopa");
 break;
 default:
 printf("op��o inv�lida");
}
}
