#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int sumFibs(int);

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        printf("hello %s\n", argv[1]);

        int fibLength = atoi(argv[1]);
        if (fibLength == 0)
        {
            return 0;
        }
        else if (fibLength == 1)
        {
            return 0;
        }
        else if (fibLength == 2)
        {
            return 1;
        }
        else
        {
            // iterate over fibonacci 0, 1, 1, 2, 3, 5, 8, 13, 21 ...
            int sum = 3;
            int first = 0, second = 1, next = 1;
            printf("%i%i%i\n", first, second, next);
            for (int i = 2; i < fibLength; i++)
            {
                first = second;
                printf("first: %i ", first);

                second = next;
                printf("second: %i ", second);

                next = first + second;
                printf("next: %i ", next);

                sum += next;
                printf("sum: %i\n", sum);

                // why did i do it that way...
            }
            return sum;
        }
    }
    else
    {
        printf("enter the fibonacci series length\n");
        return 0;
    }
}
