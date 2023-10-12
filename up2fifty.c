#include <stdio.h>

int main() {
    int a;

    for (a = 0; a <= 50; a+=2)
    {
        printf ("a is equal to %d\n", a);
    }
    printf ("A going up in 1s till %d\n", a-2);

    return (0);
}