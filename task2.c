//free fall calculator
/*Develop a program to calculate the time of fall, final velocity, and displacement for an object in free fall from a given height. 
Ensure the program correctly handles the physics of free fall and provides accurate results.*/

#include <stdio.h>
#include <math.h>  

#define GRAVITY 9.81  

int main() {
    double height, time_of_fall, final_velocity, displacement;
    printf("Enter the height (in meters) from which the object is dropped: ");
    scanf("%lf", &height);
    time_of_fall = sqrt((2 * height) / GRAVITY);
    final_velocity = GRAVITY * time_of_fall;
    displacement = (1.0 / 2.0) * GRAVITY * pow(time_of_fall, 2);
    
    printf("Time of fall: %.2f seconds\n", time_of_fall);
    printf("Final velocity: %.2f m/s\n", final_velocity);
    printf("Displacement: %.2f meters\n", displacement);
    
    return 0;
}
