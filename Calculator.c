#include <stdio.h>

int main()
{
    do
    {
        printf("Welcome to the Simple Calculator!\n");
        printf("Press 'q' to quit or any other key to continue...\n");
        char choice;
        scanf(" %c", &choice);
        if (choice == 'q')
        {
            break;
        }
        double num1, num2, result;
        char operator;

        printf("Enter first number: ");
        scanf("%lf", &num1);
        printf("Enter second number: ");
        scanf("%lf", &num2);
        printf("Enter operator (+, -, *, /): ");
        scanf(" %c", &operator);

        if (operator == '+')
        {
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
        }
        else if (operator == '-')
        {
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
        }
        else if (operator == '*')
        {
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
        }
        else if (operator == '/')
        {
            if (num2 != 0)
            {
                result = num1 / num2;
                printf("Result: %.2lf\n", result);
            }

            else
            {
                printf("Error: Division by zero is not allowed.\n");
            }
        }

        else
        {
            printf("Error: Invalid operator.\n");
        }

    } while (1);

    return 0;
}
// This code implements a simple calculator that performs basic arithmetic operations.