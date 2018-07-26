#include <cs50.h>
#include <stdio.h>

int factorialize(int n)
{
    int factorial = 1;
    for (int i = n; i > 0; i--)
    {
        printf("%i\n", i);
        factorial *= i;
    }
    printf("factorialize: %i\n", factorial);
    return factorial;
}

int main(void)
{
    factorialize(5);
}