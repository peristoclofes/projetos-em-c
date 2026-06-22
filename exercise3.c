///Exercise 3: Arithmetic Operations
#include <stdio.h>

int main(){
    // Declare two integer variables
    int a = 10;
    int b = 20;

    // Perform arithmetic operations
    int sum = a + b;
    int dif = a - b;
    int prod = a * b;
    float quot = a / (float)b;  // Cast one operand to float for floating-point division

    printf("sum: %d + %d = %d\n", a, b, sum);
    printf("difference: %d - %d = %d\n", a, b, dif);
    printf("Product: %d * %d = %d\n", a, b, prod);
    printf("Quotient: %d / %d = %.2f\n", a, b, quot);
}