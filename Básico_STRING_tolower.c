
//EXEMPLO tolower()

#include <stdio.h>
#include <ctype.h>

int main()
{
    char c;

    c='A'; //mai�sculo
    printf("%c\n", tolower(c));

    c='M'; //mai�sculo
    printf("%c\n", tolower(c));

     c='/'; // n�o mai�sculo
    printf("%c\n", tolower(c));

     c='f'; //n�o mai�sculo
    printf("%c\n", tolower(c));

    return 0;
}
