
# include <stdio.h>
# include <string.h>
# include <locale.h>

int main( )
{
    setlocale(LC_ALL,"Portuguese");

    // Declare the file pointer
    FILE *arq1, *arq2 ;

    // Declare the variable for the data to be read from file
    char linha[50];

    // Open the existing file paises.txt using fopen()
    // in read mode using "r" attribute
    arq1 = fopen("paises.txt", "r") ;

    // Check if this arq1 is null
    // which maybe if the file does not exist
    if ( arq1 == NULL )
    {
        printf( "paises.txt file failed to open." ) ;
    }
    else
    {

        printf("The file is now opened.\n") ;

    // Open the existing file paises.txt using fopen()
    // in read mode using "r" attribute
    arq2 = fopen("paises2.txt", "w") ;

    // Check if this arq1 is null
    // which maybe if the file does not exist
    if ( arq2 == NULL )
    {
        printf( "paises.txt file failed to open." ) ;
    }
    else
    {

        printf("The file is now opened.\n") ;


        // Read the dataToBeRead from the file
        // using fgets() method
        while( fgets ( linha, 50, arq1 ) != NULL )
        {

            // Print the dataToBeRead
            fputs(linha, arq2);
        }

        // Closing the file using fclose()
        fclose(arq1) ;
        // Closing the file using fclose()
        fclose(arq2) ;

        printf("Data successfully read from file paises.txt\n");
        printf("The file is now closed.") ;
    }
    return 0;
}
}
