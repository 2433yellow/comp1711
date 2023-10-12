#include <stdio.h>

int main() {
    int a;

    for (a = 0; a <= 1000; a+=11)
    {
        printf ("a is equal to %d\n", a);
    }
    printf ("A going up in 1s till %d\n", a-1);

    return (0);
}