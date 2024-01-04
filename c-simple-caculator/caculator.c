#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char calculate[50];
    printf("Enter a math operation: ");
    fgets(calculate, sizeof(calculate), stdin);
    
    if (calculate[strlen(calculate) - 1] == '\n') {
        calculate[strlen(calculate) - 1] = '\0';
    }

    int num1, num2;
    char operator;

    char *operators = "+-*/%^";
    char *op = strpbrk(calculate, operators);

    if (op != NULL) {
        operator = *op;

        sscanf(calculate, "%d %c %d", &num1, &operator, &num2);

        int result;
        switch (operator) {
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            case '*':
                result = num1 * num2;
                break;
            case '/':
                if (num2 != 0) {
                    result = num1 / num2;
                } else {
                    printf("Division by zero is not allowed.\n");
                    return 1;
                }
                break;
            case '%':
                result = num1 % num2;
                break;
            case '^':
                result = 1;
                for (int i = 0; i < num2; ++i) {
                    result *= num1;
                }
                break;
            default:
                printf("Operator is not recognized.\n");
                return 1;
        }

        printf("The result of %d %c %d is: %d\n", num1, operator, num2, result);
    } else {
        printf("No operator found or invalid format.\n");
    }

    return 0;
}
