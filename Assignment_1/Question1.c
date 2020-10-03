# include <stdio.h>
# include <string.h>

int main( ) {

    // Declare the file pointer
    FILE *filePointer ;
    FILE *filePointer1;

    // Declare the variable for the data to be read from file
    char dataToBeRead[100];

    // Open the existing file GfgTest.c using fopen()
    // in read mode using "r" attribute
    filePointer = fopen("file1.txt", "r") ;
    filePointer1 = fopen("file2.txt", "w") ;

    // Check if this filePointer is null
    // which maybe if the file does not exist
    if ( filePointer == NULL ) 
    {
        printf( "File1.txt file failed to open.\n" ) ;
    } 
    else if(filePointer1==NULL)
    {
    	printf("File2.txt failed to open.\n");
    }
    else 
    {
        printf("The file1 and file2 are now opened.\n") ;
        // Read the dataToBeRead from the file
        // using fgets() method
        while( fgets ( dataToBeRead, 100, filePointer ) != NULL ) 
        {
      	
            if ( strlen (  dataToBeRead  ) > 0 ) 
            {
				// writing in the file2 using fputs()
                fputs(dataToBeRead, filePointer1) ;
            }
        }
        // Closing the file using fclose()
        fclose(filePointer) ;
        printf("Data successfully read from File1.txt\n");
        fclose(filePointer1) ;
        printf("The file1 is now closed. \n") ;
        printf("Data is successfully written into File2.txt \n");
        printf("The file2 is now closed. \n") ;
        return 0;
    }
}
