#include <stdio.h>
#include <locale.h>

int main()

{

setlocale(LC_ALL, "Portuguese");

float notas[5];
int i, aluno;


for (i=1; i<=6; i++){

    printf("Digite a nota do aluno %d:\n", i);
    scanf("%f", &notas[i]);
}
printf("A nota de qual aluno que você deseja ver?\n");
scanf("%d", &aluno);

printf("A nota do aluno %i foi ", aluno);

if (aluno == 1) {
    printf("%.2f", notas[1]);
}

if (aluno == 2) {
    printf("%.2f", notas[2]);
}

if (aluno == 3) {
    printf("%.2f", notas[3]);
}

if (aluno == 4) {
    printf("%.2f", notas[4]);
}

if (aluno == 5) {
    printf("%.2f", notas[5]);
}

if (aluno == 6) {
    printf("%f", notas[6]);
}
}
