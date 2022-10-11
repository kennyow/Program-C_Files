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
printf("digite:\n 1 - soma\n 2 - subtração\n 3 - produto\n 4 - divisão\n");
scanf("%d",&escolha);
printf("digite as duas variáveis: \n");

scanf("%f %f",&x,&y);
switch(escolha){
 case 1:
 printf("Resultado é : %f" ,x+y);
 break;
 case 2:
 printf("Resultado é : %f" ,x-y);
 break;
 case 3:
 printf("Resultado é : %f" ,x*y);
 break;
 case 4:
 printf("Resultado é : %f" ,x/y);
 break;
 default:
 printf("opção inválida");
}
printf("\n\nNovo cálculo ? s ou n ?\n");
scanf("%*c",&resp);
}while(resp == 's');
}
