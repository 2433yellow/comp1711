#include <stdio.h>
#include <string.h>
#include <stdlib.h> //needed atoi askey to integer ascii (code for symbol)

int main() {
    char filename [] = "data.txt";
    FILE *file = fopen(filename, "r"); //read function ,w for write
    if (file == NULL) {
        perror("");
        return 1;
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