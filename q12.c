//factorial of n number 

#include <stdio.h>

int main() {
    int n, i;
    unsigned long long factorial = 1;

    printf("Enter a number : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
            factorial *= i;
        }
 printf("Factorial of %d = %llu\n", n, factorial);
    }
return 0;
}
