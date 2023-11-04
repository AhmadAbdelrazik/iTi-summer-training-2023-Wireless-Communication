#include <stdio.h>

#define multiply(x, y)  ((x)*(y))

int main()
{
    int x = 4;
    printf("x = %d\n", multiply(x++, x++));
    x = 4;
    printf("x = %d\n", multiply(++x, ++x));
    return 0;
}
