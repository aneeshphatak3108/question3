#include <stdio.h>
#include <math.h>  // Added for pow()

int main() {
    char op;
    double num1, num2;

    printf("Enter an operator (+, -, *, /, ^): ");
    scanf(" %c", &op);
    printf("Enter two operands: ");
    scanf("%lf %lf", &num1, &num2);

    switch (op) {
        case '+': printf("%.2lf\n", num1 + num2); break;
        case '-': printf("%.2lf\n", num1 - num2); break;
        case '*': printf("%.2lf\n", num1 * num2); break;
        case '/': 
            if (num2 != 0)
                printf("%.2lf\n", num1 / num2);
            else
                printf("Division by zero error.\n");
            break;
        case '^': printf("%.2lf\n", pow(num1, num2)); break;
        default:
            printf("Invalid operator.\n");
    }
printf("Done!");
    return 0;
}

