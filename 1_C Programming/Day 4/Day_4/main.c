#include <stdio.h>

void fibonacci(int n);

int main()
{
    int n;
    printf("Enter the number of Fibonacci: ");
    scanf("%d", &n);
    fibonacci(n);
    return (0);
}

void fibonacci(int n)
{
    int f1 = 0, f2 = 1, i;
    if (n >= 1)
        printf("0\n");
    if (n >= 2)
        printf("1\n");
    for(i = 2; i < n; i++)
    {
        f2 = f1 + f2;
        f1 = f2 - f1;
        printf("%d\n", f2);
    }
}
