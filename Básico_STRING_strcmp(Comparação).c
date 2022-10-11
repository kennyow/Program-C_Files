#include <stdio.h>
#include <locale.h>
#include <string.h>

int main()

{

setlocale(LC_ALL, "Portuguese");

char vet1[100], vet2[100];
int ret;

printf("Digite um nome 1: \n");
scanf("%s", vet1);
printf("Digite um nome 2: \n");
scanf("%s", vet2);

ret = strcmp(vet1, vet2);



if (ret > 0) {
    printf("%s é maior que %s\n", vet1, vet2);
}
if (ret < 0) {
    printf("%s é menor que %s\n", vet1, vet2);
}
else {
    printf("%s é igual a %s\n", vet1, vet2);
}

}
