#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    //float notas[20]; //vetor
    //float mnotas[10][2]; //matriz

    struct ficha_aluno //ficha_aluno é um tipo de dado
    {
        //<listagem dos tipos e membros>;
        int numero;
        float nota;
        char nome[40];
    };// definição da struct

    struct ficha_aluno aluno;

    printf("\n----------CADASTRO DE ALUNO----------\n\n\n");

    printf("Nome do aluno.....: ");
    fgets(aluno.nome, 40, stdin);

    printf("Número do  aluno: ");
    scanf("%d", &aluno.numero);

    printf("Informe a nota do aluno: ");
    scanf("%f", &aluno.nota);

    printf("\n----------Lendo os dados da STRUCT----------\n\n");
    printf("Nome..........: %s", aluno.nome);
    printf("Número........: %d \n", aluno.numero);
    printf("Nota..........: %.2f \n", aluno.nota);

    return(0);

}
