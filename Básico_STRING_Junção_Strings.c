#include <stdio.h>
#include <string.h>


//Using header
void escreveCabecalho() {
printf("******* Confrontando Nomi *********\n");
printf("******* Biblioteca *********\n");
}

int main() {


char nome1[30], nome2[30];
printf("/n");
//Header function
escreveCabecalho();

printf("Inserisci un nome: \n");
scanf("%s", nome1);

printf("Inserisci un altro nome: \n");
scanf("%s", nome2);

printf("%s", nome1);
//printf("Os nomes emendados fica %s", strcat(nome1, nome2));
}




