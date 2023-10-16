#include <stdio.h>

int main() {
    
//challenges
// Add a case for 2
//Add a case for 3
//Make a take in an input from the user
//validate the input from the user so it is always between 0 and 3 (inclusive) 
   int number;

    

    printf ("Enter the number: \n");
    scanf ("%d", &number);


    if ((number>=0)&&(number<4)){
        switch (number)
        {
            case 0:     printf ("Option 0 has been selected\n");
            break;

            case 1:     printf ("Option 1 has been selected\n");
            break;

            case 2:     printf ("Option 2 has been selected\n");
            break;

            case 3:     printf ("Option 3 has been selected\n");
            break;

            default:    printf ("A different option has been selected\n");
        }
    }
        else
        {
            printf("invalid imput \n");
        }
    }
