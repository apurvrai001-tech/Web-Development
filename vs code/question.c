#include <stdio.h>

int main()
{
    short a = 1;
    short b = a++ + ++a * a++ + ++b;
    printf("%d\n%d", a, b);

    return 0;
}