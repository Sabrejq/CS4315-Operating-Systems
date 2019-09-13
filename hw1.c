/*  Julio Quintero 11/9/2019 dd/mm/yyy 

    This program is a simple code that will count the number of none white spaces in a text file. It does this by counting all the characters and substracting the white spaces. 
    It is simple code, it has been tested on pdf, word, or other type of file that isn't a text file. 

*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    // Variables
FILE *file;
char c,ch,total;
int char_count = 0, count = 0;

// Check if file can be open 
if ( (file = fopen(argv[1], "r")) == NULL) {
fprintf(stderr,"%s: cannot open %s \n", argv[0], argv[1]);
exit(1);
}

// Extract characters from file
    // and store in character c
    for (c = getc(file); c != EOF; c = getc(file))

        // Increment count for all characters
        char_count++;

    //count white spaces 
    while((ch = fgetc(file))!=EOF)
                  if(ch==' ')
                      count++;

// (character - white spaces) will give all none white characters  
total = char_count - count;

    // Print the count of characters
    printf("The file has %d characters\n ", total);

 // Close the file
    fclose(file);
    return 0;
}
