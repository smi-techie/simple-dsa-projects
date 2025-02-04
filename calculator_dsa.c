#include <stdio.h>  

// Function declarations  
float add(float a, float b);  
float subtract(float a, float b);  
float multiply(float a, float b);  
float divide(float a, float b);  

int main() {  
    float num1, num2, result;  
    char operator;  

    // Display menu  
    printf("Welcome to the Basic Calculator!\n");  
    printf("Enter a calculation (e.g., 4 + 5): ");  
    scanf("%f %c %f", &num1, &operator, &num2);  

    switch (operator) {  
        case '+':  
            result = add(num1, num2);  
            printf("Result: %.2f\n", result);  
            break;  
        case '-':  
            result = subtract(num1, num2);  
            printf("Result: %.2f\n", result);  
            break;  
        case '*':  
        case 'x':  
            result = multiply(num1, num2);  
            printf("Result: %.2f\n", result);  
            break;  
        case '/':  
            // Check for division by zero  
            if (num2 != 0) {  
                result = divide(num1, num2);  
                printf("Result: %.2f\n", result);  
            } else {  
                printf("Error: Division by zero is not allowed.\n");  
            }  
            break;  
        default:  
            printf("Error: Invalid operator '%c'. Please use +, -, *, or /.\n", operator);  
            break;  
    }  

    return 0;  
}  

// Function definitions  
float add(float a, float b) {  
    return a + b;  
}  

float subtract(float a, float b) {  
    return a - b;  
}  

float multiply(float a, float b) {  
    return a * b;  
}  

float divide(float a, float b) {  
    return a / b;  
}

