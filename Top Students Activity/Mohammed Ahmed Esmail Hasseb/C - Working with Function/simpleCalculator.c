#include <stdio.h>

int main() {
    float num1, num2, result;
    char op;
    int i, f = 1;

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    printf("Enter an operation (+, -, *, /, !): ");
    scanf(" %c", &op);

    switch (op) {
        case '+':
            result = num1 + num2;
            printf("The result=%.2f\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("The result=%.2f\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("The result=%.2f\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("The result=%.2f\n", result);
            } else {
                printf("Error: Division by zero.\n");
            }
            break;
        case '!':
            // Assuming that factorial is requested for num1 and num1 is a non-negative integer
            if (num1 < 0) {
                printf("Error: Factorial of a negative number doesn't exist.\n");
            } else {
                for (i = 1; i <= num1; ++i) {
                    f *= i;
                }
                printf("The factorial of %.0f is %d\n", num1, f);
            }
            break;
        default:
            printf("Invalid operation.\n");
    }

    return 0;
}
