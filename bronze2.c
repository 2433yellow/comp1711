#include <stdio.h>

int main() {
    int b; //variable for dividing by 4
    int c; //variable for dividing by 5
    int number;

    

    printf ("Enter the number: \n");
    scanf ("%d", &number);
    b= number%4;
    c= number%5;

    if ((b==0 )&&(c==0)  ) 
    {
        printf ("This number is divisiable by 4 and 5\n");
    }
    
     else
    {

    printf ("This number is not divisable by 4 and 5\n");

    }

    return 0;
}
