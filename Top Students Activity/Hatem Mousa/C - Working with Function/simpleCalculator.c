#include <stdio.h>

int main() {
    float num1, num2;
    char op;
    float result;

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    printf("Enter your op (+, -, *, /): ");
    scanf(" %c", &op);

    switch (op) {
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
            if (num2 == 0) {
                printf("Error: division by 0\n");
                return 0;
            }
            result = num1 / num2;
            break;
    }

    printf("Result: %f\n", result);
    return 0;
}
