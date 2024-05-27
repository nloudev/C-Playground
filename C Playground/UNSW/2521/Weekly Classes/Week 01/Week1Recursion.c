#include <stdlib.h>
#include <stdio.h>

// RECURSION - Week 1

/*
Example 1: Factorial

Computing factorial (n!)

- base case: n is 1 -> n! is 1
- for larger values:
    - I can't solve the whole problem directly
    - but i do know the value of n
    - I could comput (n-1)! (easier than n! ?)
- multiply n by (n-1)!, giving n!

e.g

factorial(3)    = 3 * factorial(2)
                = 3 * (2 * factorial(1))
                = 3 * ( 2 * 1)          =   6
*/

// Expressed as a C function
int factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

// iterative version

int iterativeFactorial(int n)
{
    int fac = 1;
    for (int i = 1; i <= n; i++)
    {
        fac = fac * i;
    }
    return fac;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
Example 2: Summing values in a lists

summing integer values in a list

- base case: empty list => sum is zero
- for larger lists:
    - I can't solve the whole problem directly
    - but I do know the first value in the list
    - sum the rest of the list (smaller than whole list, easier?)
- add first value to sum-of-rest, giving sum of whole

e.g

sum [1,2,3]     = 1 + sum [2,3]
                = 1 + (2 + sum [3])
                = 1 + (2 + (3 + sum []))
                = 1 + (2 + (3 + 0))         = 6

*/

/*Expressed as an (abstract) function
int sum(List L) {
    if (empty(L)){
        return 0;
    }
    else {
        int first, sumRest;
        first = head(L);
        sumRest = sum(tail(L));
        return first + sumRest;
    }
}
*/

// using typical list data structure:
struct Node
{
    int val;
    struct Node *next;
};

/*int sum(struct Node *L){
    if (L == NULL){
        return 0;
    }
    else {
        int first, sumRest;
        first = L->val;
        sumRest = sum(L->next);
        return first + sumRest;
    }
}*/

// or

int sum(struct Node *L)
{
    if (L == NULL)
    {
        return 0;
    }
    else
    {
        return L->val + sum(L->next);
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
How it works

Recursion is a function valling itself

each call to the function is a separate _instance_
- each function call creates a new mini-environment
- holds all of the data needed by the function

The "mini-environments" are called stack frames
- removed when the function return
*/

/*
When designing recursive functions
- return to recursion basics
- identify the base case
- see how the problem can be reduced
- see how results can be built from base + recursive case
*/

// Sometimes recursive can be ineeficient
int fibonacci(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else if (n == 2)
    {
        return 1;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main(void)
{
    printf("\nHello World\n\n");

    return 0;
}