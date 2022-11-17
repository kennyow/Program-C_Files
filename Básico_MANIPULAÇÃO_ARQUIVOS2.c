
// C program to Open a File,
// Read from it, And Close the File

# include <stdio.h>
# include <string.h>
# include <locale.h>

int main( )
{
    setlocale(LC_ALL,"Portuguese");
    // Declare the file pointer
    FILE *filePointer ;

    // Declare the variable for the data to be read from file
    char dataToBeRead[50];

    // Open the existing file paises.txt using fopen()
    // in read mode using "r" attribute
    filePointer = fopen("paises.txt", "r") ;

    // Check if this filePointer is null
    // which maybe if the file does not exist
    if ( filePointer == NULL )
    {
        printf( "paises.txt file failed to open." ) ;
    }
    else
    {

        printf("The file is now opened.\n") ;

        // Read the dataToBeRead from the file
        // using fgets() method
        while( fgets ( dataToBeRead, 50, filePointer ) != NULL )
        {

            // Print the dataToBeRead
            printf( "%s" , dataToBeRead ) ;
        }

        // Closing the file using fclose()
        fclose(filePointer) ;

        printf("Data successfully read from file paises.txt\n");
        printf("The file is now closed.") ;
    }
    return 0;
}
