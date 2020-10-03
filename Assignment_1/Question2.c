# include <stdio.h>
# include <string.h>
int main( )
{
	char dataToBeRead[100];
	 FILE *filePointer;
	 filePointer = fopen("file1.txt", "r") ;
	  if ( filePointer == NULL ) 
    {
        printf( "File1.txt file failed to open.\n" ) ;
    } 
    else 
    {

        printf("The file1 is now opened.\n") ;
        printf("The file contents are as follows: \n");
        printf("********************************************************\n");
        while( fgets ( dataToBeRead, 100, filePointer ) != NULL ) 
        {
        	printf( "%s", dataToBeRead ) ;
        }
        printf("********************************************************\n");

	}
}
