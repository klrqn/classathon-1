#include <cs50.h>
#include <stdio.h>

int factorialize(int n)
{
    long long factorial = 1;
    for (int i = n; i > 0; i--)
    {
        factorial *= i;
    }
    printf("factorialize: %lld\n", factorial);
    return factorial;
}

int main(void)
{
    printf("enter a number: ");
    int n = get_int();
    factorialize(n);
}