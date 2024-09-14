//program to check if a triangle is right angled triangle -take input of 3 sides from user

#include <stdio.h>

int max(int l1, int l2 ,int l3)
 {
    if (l1 >= l2 && l1>= l3)
        return l1;
    else if (l2 >= l1 && l2 >= l3)
        return l2;
    else
        return l3;
}

int main() {
    int l1,l2,l3;
    int max_side;
    printf("Enter the lengths of the three sides of the triangle:\n");
    scanf("%d %d %d", &l1, &l2, &l3);

    max_side = max(l1,l2,l3);

    if (max_side == l1) {
        if (l2*l2 + l3*l3 == l1*l1) {
            printf("The triangle is a right-angled triangle.\n");
        } else {
            printf("The triangle is not a right-angled triangle.\n");
        }
    } else if (max_side == l2) {
        if (l1*l1 + l3*l3 == l2*l2) {
            printf("The triangle is a right-angled triangle.\n");
        } else {
            printf("The triangle is not a right-angled triangle.\n");
        }
    } else {
        if (l1*l1 + l2*l2 == l3*l3) {
            printf("The triangle is a right-angled triangle.\n");
        } else {
            printf("The triangle is not a right-angled triangle.\n");
        }
    }

    return 0;
}
