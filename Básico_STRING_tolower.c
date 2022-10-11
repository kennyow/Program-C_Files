
//EXEMPLO tolower()

#include <stdio.h>
#include <ctype.h>

int main()
{
    char c;

    c='A'; //maiúsculo
    printf("%c\n", tolower(c));

    c='M'; //maiúsculo
    printf("%c\n", tolower(c));

     c='/'; // não maiúsculo
    printf("%c\n", tolower(c));

     c='f'; //não maiúsculo
    printf("%c\n", tolower(c));

    return 0;
}
