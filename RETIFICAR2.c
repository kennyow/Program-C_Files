#include<stdio.h>
#include <locale.h>


int rr(int R, int S, int T){
    float delta;
    int x1, x2;
    delta = S*S - 4.*R*T;

     if (delta >= 0) {
     x1 = (-S + sqrt(delta))/(2.*R);
     x2 = (-S - sqrt(delta))/(2.*R);
     printf("As raizes reais sao: 1a. raiz = %f 2a.raiz= %f\n", x1, x2);
     }
     else {
     printf("Nao existem raizes reais");
     }
     getch();
}

int pot(int num)
{
int potencia = 1, contador = 0;
  while (contador != num) {
    potencia = potencia * num;
    contador = contador + 1;
  }
}

int fat(int num)
{
if(num==0)
return 1;
else
return num * fat(num-1);
}


int main()

{
setlocale(LC_ALL,"portuguese");
int fat,sub,exp,rr;
int num;
int escolha;
char resp;

do{
printf("digite:\n 1 - Fatorial\n 2 - Exponenciação\n 3 - Raízes Reais\n");
scanf("%d",&escolha);

if (escolha == 1){
    printf("Digite um número para o fatorial:\n");
    scanf("%d", &num);
    fat(num);
    printf("Resultado é : %f", fat);

if (escolha == 2){
    int x, n;
    printf("\nDigite um numero inteiro: ");
    scanf("%d", &x);
    printf("Digite um numero um inteiro nao-negativo: ");
    scanf("%d", &n);
    pot(x, n)
    printf("\nO valor de %d elevado a %d: %d\n", x, n, potencia);

if (escolha == 3){
    float A,B,C;
    float delta, x1,x2;
    printf("Entre com os coeficientes da equaçao\n");
    scanf("%f %f %f",&A,&B,&C);
    rr(A, B, C);

}
printf("\n\nNovo cálculo ? s ou n ?\n");
scanf("%*c",&resp);
}while(resp == 's');
}
