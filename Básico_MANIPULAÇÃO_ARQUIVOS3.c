#include <stdio.h>
#include <string.h>

int main()
{
    FILE *arq = fopen("teste.txt","w");
    if (arq == NULL)
    {
        perror("Erro ao abrir o arquivo!Pew!");
        return 1;

    }

    //escrever no arquivo
    //int a = 10;
    char str[ ]="palavra";
    int size = strlen(str);

    fwrite(str, sizeof(char), size-1, arq);

    fclose(arq);

return 0;


}
