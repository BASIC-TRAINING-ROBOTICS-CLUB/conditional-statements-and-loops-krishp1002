#include <stdio.h>
#include "calc.h"

int main() {
    int a = 22;
    int b = 7;
    
    printf("Addition: %d+%d = %d\n", a, b, add(a, b));
    printf("Subtraction: %d-%d = %d\n", a, b, subtract(a, b));
    printf("Multiplication: %d*%d = %d\n", a, b, multiply(a, b));
    printf("Division: %d/%d = %.2f\n", a, b, divide(a, b));
    
    return 0;
}
