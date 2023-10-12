#include <stdio.h>

// int main() {
//     // int a;

//     // for (a = 100; a > 0; a-=5)
//     // {
//     //     printf ("a is equal to %d\n", a);
//     // }
//     // printf ("A going down in 5s till %d\n", a=5);

//     // return (0);
// }
// int main(){
//     int num = 4;
//     int guess;

//     while (guess!=num){
//         printf("enter amount: ");
//         scanf("%d", &guess);

//     }
// printf("correct\n");

// }   


int main()
{
    int a [10];
    int count;

    //populate an array
    for (count = 0; count < 10 ; count++)
    {
        a[count] = count * 10 + count;
    }

    printf ("The first and second elements are %d and %d\n", 
    a[0], a[1]);
    printf ("Or, via pointers, %d and %d\n", *a, *(a+1));

    return 0;
}