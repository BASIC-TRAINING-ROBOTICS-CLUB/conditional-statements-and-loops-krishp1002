//take value of x and y and check its quadrant

#include <stdio.h>

int main() {
    float x, y;

    printf("x: ");
    scanf("%f", &x);
    printf("y: ");
    scanf("%f", &y);

    if (x>0 && y>0) {
        printf("(%.2f, %.2f) - First Quadrant.\n", x, y);
    }
    else if (x < 0 && y > 0) {
        printf("(%.2f, %.2f) - Second Quadrant.\n", x, y);
    } 
    else if (x < 0 && y < 0) {
        printf("(%.2f, %.2f) - Third Quadrant.\n", x, y);
    } 
    else if (x > 0 && y < 0) {
        printf("(%.2f, %.2f) - Fourth Quadrant.\n", x, y);
    } 
    else if (x == 0 && y == 0) {
        printf("(%.2f, %.2f) - Origin.\n", x, y);
    } 
    else if (x == 0) {
        printf("(%.2f, %.2f) - on the Y-axis.\n", x, y);
    } else if (y == 0) {
        printf("(%.2f, %.2f) - on the X-axis.\n", x, y);
    }

    return 0;
}
