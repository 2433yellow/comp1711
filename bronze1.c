#include <stdio.h>

int main() {
    int number;

    

    printf ("Enter the number: \n");
    scanf ("%d", &number);

    if (number < 0 ) 
    {
        printf ("This number is %d is negative\n", number);
    }
    else if (number >= 1)
    {
        printf ("This number is %d positive \n", number);
    }

    else if (number == 0)
    {
        printf ("This number is %d zero\n", number);
    }
    else
    {
        printf ("The mark of %d is a invalid\n", number);
    }

    return 0;
}