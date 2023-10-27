#include <stdio.h>

int main() {
    char filename [] = "data.txt";
    FILE *file = fopen(filename, "a"); /* or "a" adds wat u ask them, "w+", 
    "a+" append plus read create a file fopen chck
    kbdnb
    ffggg
    ggggg
    */
    if (file == NULL) {     //checks errors
        perror("");
        return 1; //1 means error file is empty
    }

    int number, num_lines = 10; //sets integers
    printf("Type %d numbers: ", num_lines); //prints this
    for (int i = 0; i < num_lines; i++) {
        scanf("%d", &number); //scans num u put in one by one
        fprintf(file, "%d\n", number); //writes 2 data .txt
    }

    fclose(file);
    return 0; //f gets file gets string
}