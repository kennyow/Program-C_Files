#include <stdio.h>
#include <locale.h>
int main()
{

 setlocale(LC_ALL, "Portuguese");

 //Declaração de Variáveis
 int tabela[3][3];
 int L, C;

 // preenche tabela
for (L = 0; L < 3; L++){
for (C = 0; C < 3; C++){
printf("Digite o número da linha %d coluna %d:\n", L, C);
scanf("%i", &tabela[L][C]);
}
}

// exibe a tabela preenchida
for (L = 0; L < 3; L++){
for (C = 0; C < 3; C++){
printf("%d - ", tabela[L][C]);
 }
printf("\n");
 }
}
