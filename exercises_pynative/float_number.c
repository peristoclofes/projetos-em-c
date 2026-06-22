//Exercise 1: Float Input/Output
#include <stdio.h>

float num = 0;

int main(){
    printf("Float number: ");
    scanf("%f", &num);
    printf("%.2f\n", num);
    return 0;
}
