#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    float valueOne;
    float valueTwo;
    char operator;
    float answer;

    printf("\nReally cool calculator!\n\n");

    printf("Enter Calculation:\n");
    scanf("%f %c %f", &valueOne, &operator, & valueTwo);

    switch (operator)
    {
    case '/':
        answer = valueOne / valueTwo;
        break;
    case '*':
        answer = valueOne * valueTwo;
        break;
    case '+':
        answer = valueOne + valueTwo;
        break;
    case '-':
        answer = valueOne - valueTwo;
        break;
    case '^':
        answer = pow(valueOne, valueTwo);
        break;
    default:
        goto fail;
    }

    printf("\n%.2f %c %.2f = %.2f\n\n", valueOne, operator, valueTwo, answer);

    goto exit;
fail:
    printf("Fail. \n");
exit:

    return 0;
}