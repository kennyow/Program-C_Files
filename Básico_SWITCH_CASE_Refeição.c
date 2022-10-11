#include<stdio.h>
#include <locale.h>

int main()

{

setlocale(LC_ALL,"portuguese");
float soma,sub,prod,div;
float x,y;
int escolha;
char resp;


printf("digite sua opção de refeição:\n 1 - café da manhã\n 2 - almoço\n 3 - janta\n");
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
 printf("opção inválida");
}
}
