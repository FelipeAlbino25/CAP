#include <stdio.h>

int factorial(int n)
{

    if (n <= 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int fibonacci(int n)
{
    if (n == 1)
        return 0;
    if (n <= 3)
        return 1;
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main(void)
{
    printf("%d", factorial(5));
    printf("\n%d", fibonacci(7));
}