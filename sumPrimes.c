#include <stdio.h>
#include <cs50.h>
#include <math.h>

int sumPrimes(int);
bool isPrime(int);

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        // printf("hello %s\n", argv[1]);
        int n = atoi(argv[1]);
        // printf("%i\n", n);
        sumPrimes(n);
    }
    else
    {
        printf("usage: enter an int\n");
    }
}

int sumPrimes(int n)
{

    int sum = 0;
    // int sqrtN = sqrt(n);
    // printf("square root of %i: %i\n", n, sqrtN);

    // figure out if digit is prime.
    for (int i = 2; i < n; i++)
    {
        if (isPrime(i))
        {
            sum += i;
        }
    }
    printf("sum of all primes: %i\n", sum);
    return sum;
}

bool isPrime(int n)
{
    if (n == 1)
    {
        return false;
    }
    // int sqrtN = sqrt(n);
    // printf("square root of %i: %i\n", n, sqrtN);
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    printf("%i is prime\n", n);
    return true;
}