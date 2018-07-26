#include <stdio.h>
#include <cs50.h>
#include <string.h>

int strContains(string, string);

int main(void)
{
    printf("hello world\n");

    string a = get_string("enter an outer word: ");
    string b = get_string("enter an inner word: ");
    strContains(a, b);
}

int strContains(string outerStr, string innerStr)
{

    // get the lengths of both strings
    int outerLength = strlen(outerStr);
    int innerLength = strlen(innerStr);

    // hacker challenge
    int numberOfMatches = 0;

    // determine if characters match
    // iterate through the outer string
    for (int strOidx = 0; strOidx < outerLength; strOidx++)
    {
        // iterate through the inner string
        int counter = 0;
        for  (int strIidx = 0; strIidx < innerLength; strIidx++)
        {
            // check that characters match through both iterations
            if (outerStr[strOidx+strIidx] == innerStr[strIidx])
            {
                // if the counter equals the length of the inner string, it's a match
                counter += 1;
                if (counter == innerLength)
                {
                    // add to the match counter and reset the original counter
                    numberOfMatches += 1;
                    counter = 0;
                }
            }
        }
    }

    // If the 2nd string does not exist inside the first string then print:
    // “The string does not exist”
    // Then return the integer 0
    // If the 2nd string exists inside the first string print:
    // “The string exists”
    // Then return the integer 1
    // Ignore case.
    // Hacker level:
    // If the string contains the word more than once print:
    // “This string is full of the word”
    // Then return the integer 2

    printf("number of matches: %i\n", numberOfMatches);
    return 0;
}