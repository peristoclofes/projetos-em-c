// Exercise 4: Circumference/Area of a Circle
#include <stdio.h>

int main(){
    // Declare constants and variables
    const float PI = 3.14159;
    float radius = 5.0;
    // Calculate circumference and area
    float circumference = 2 * PI * radius;
    float area = PI * radius * radius;

    // Print the results
    printf("Area: %.3f\n", area);
    printf("Circumference: %.3f\n", circumference);
    
}