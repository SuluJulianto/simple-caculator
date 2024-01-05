#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
    char calculate[50];
    printf("Enter a math operation: ");
    fgets(calculate, sizeof(calculate), stdin);

    // Remove newline character if present in the input
    if (calculate[strlen(calculate) - 1] == '\n') {
        calculate[strlen(calculate) - 1] = '\0';
    }

    int num1, num2, answer;
    char operator;

    if (sscanf(calculate, "%d %c %d", &num1, &operator, &num2) == 3) {
        switch (operator) {
            case '+':
                answer = num1 + num2;
                printf("%d + %d = %d\nYour answer is %d\n", num1, num2, answer, answer);
                break;
            case '-':
                answer = num1 - num2;
                printf("%d - %d = %d\nYour answer is %d\n", num1, num2, answer, answer);
                break;
            case '*':
                answer = num1 * num2;
                printf("%d * %d = %d\nYour answer is %d\n", num1, num2, answer, answer);
                break;
            case '/':
                if (num2 != 0) {
                    float result = (float)num1 / num2;
                    printf("%d / %d = %.2f\nYour answer is %.2f\n", num1, num2, result, result);
                } else {
                    printf("Error! Division by zero is not allowed.\n");
                }
                break;
            case '%':
                answer = num1 % num2;
                printf("%d %% %d = %d\nYour answer is %d\n", num1, num2, answer, answer);
                break;
            default:
                printf("Operation not recognized or not supported.\n");
        }
    } else {
        printf("Invalid input format.\n");
    }

    return 0;
}
