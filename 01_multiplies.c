/*
    Problem 01
    Multiples of 3 and 5

    If we list all the natural numbers below 10 that are multiples
    of 3 or 5, we get 3, 5, 6, 9. The sum of these multiples
    is 23.

    Question:
    Find the sum of all the multiples of 3 and 5 below 1000.

    Answer: 233168

*/

#include <stdio.h>

#define MULTIPLIER_ONE 3
#define MULTIPLIER_TWO 5
#define UPPER_BOUND 1000000000

int main()
{
    unsigned int sum = 0;

    for (unsigned int i = 1; i < UPPER_BOUND; i++)
    {
        if ((i % MULTIPLIER_ONE == 0) || (i % MULTIPLIER_TWO == 0))
        {
            // printf("%d\n", i);
            sum += i;
        }
    }
    printf("%d \n", sum);
    return 0;

}
