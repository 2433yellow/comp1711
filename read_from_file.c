#include <stdio.h>
#include <string.h>
#include <stdlib.h> //needed atoi askey to integer ascii (code for symbol)

int main() {
    char filename [] = "gdata1.txt";
    FILE *file = fopen(filename, "r"); //read function ,w for write
    if (file == NULL) { //file doesnt exist then ther is an error
        perror("");
        return 1; //error flag 17 16 15 not needed fo coursework session one week3 or worksheet 1
    }

    int buffer_size = 100; //amount of digit spaces
    char line_buffer[buffer_size]; //created line buffer its a character array 
    //the file from last code w created made a sting 10 of umbers
    int i =0;
    while (fgets(line_buffer, buffer_size, file) != NULL && i < 4) { //main reading routine reads from file null goes on till end of file
        printf("%d\n", atoi(line_buffer)); // coverts ascii to an integer
        i++;
    }

    fclose(file); //always close it after you opening 
    return 0;
} 
//scanf nobody there to type it //fgets reads from file //tolkeinise records 