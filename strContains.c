#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <assert.h>

int strContains(string, string);
bool testStrContains(void);

int main(void)
{
    printf("hello world\n");

    string a = get_string("enter an outer word: ");
    string b = get_string("enter an inner word: ");
    strContains(a, b);
    testStrContains();
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

    printf("number of matches: %i\n", numberOfMatches);

    if (numberOfMatches == 0)
    {
        printf("The string does not exist\n");
        return 0;
    }
    else if (numberOfMatches == 1)
    {
        printf("The string exists\n");
        return 1;
    }
    else if (numberOfMatches > 1)
    {
        printf("This string is full of the word\n");
        return 2;
    }
    else
    {
        printf("negative. does not compute\n");
    }
    return -1;
}

bool testStrContains(void)
{
    assert(strContains("hello", "l") == 2 && "hello has 2 l's");
    assert(strContains("endangered", "end") == 1 && "endangered has 1 'end'");
    assert(strContains("The dog sleeps in the dog house", "dog") == 2 && "dog is in the string twice");
    return false;
}

// “endangered” “end” true
// “endangered” “danger” true
// “the dog sleeps in the dog house” “Jack” false
// “the dog sleeps in the dog house” “dog” true (hacker multiple)
// Hacker level 2: Confirm case
// “The dog sleeps in the dog house” “The” single true
// “The dog sleeps in the dog house” the” single true
// “The dog sleeps in the dog house” “dog” multi true