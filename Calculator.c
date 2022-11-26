// Program to create a simple calculator in C programming language

#include <stdio.h>
int main()
{
    char op;
    int n1, n2;
    float res;

    printf(" Choose an operator(+, -, *, /) to perform the operation : \n");
    scanf("%c", &op);

    printf("Enter the First Number: ");
    scanf("%d", &n1);

    printf("Enter the second number: ");
    scanf("%d", &n2);

    switch (op)
    {
    // add two numbers
    case '+':
        res = n1 + n2;
        printf(" Addition of %d and %d is: %.2f", n1, n2, res);
        break;

    // subtract two numbers
    case '-':
        res = n1 - n2;
        printf(" Subtraction of %d and %d is: %.2f", n1, n2, res);
        break;

    // multiply two numbers
    case '*':
        res = n1 * n2;
        printf(" Multiplication of %d and %d is: %.2f", n1, n2, res);
        break;

    // divide two numbers
    case '/':
        // if n2 == 0, take another number
        if (n2 == 0)
        {
            printf(" Divisor cannot be zero. Please enter another value ");
            scanf("%d", &n2);
        }
        res = n1 / n2;
        printf(" Division of %d and %d is: %.2f", n1, n2, res);
        break;

    default:
        printf(" Invalid Operator.");
    }

    return 0;
}
