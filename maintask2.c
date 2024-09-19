#include <stdio.h>
#include "freefall.h"

int main() {
    double height ;
    printf("Height : ");
    scanf("%lf",&height);
    double time, velocity, displacement;

  
    time = calculate_time_of_fall(height);
    printf("time : %.2f",time);

    velocity = calculate_final_velocity(height);
    printf("velocity : %.2f",velocity);

    displacement = calculate_displacement(time);
    printf("displacemnt after %.2f seconds : %.2f",time,displacement);
    
    return 0;
}
