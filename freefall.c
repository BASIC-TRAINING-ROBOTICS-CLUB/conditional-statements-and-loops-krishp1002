#include <math.h>
#include "freefall.h"

double calculate_time_of_fall(double height) {
    return sqrt((2 * height) / GRAVITY);
}
double calculate_final_velocity(double height) {
        return sqrt(2 * GRAVITY * height);
    }

double calculate_displacement(double time) {
    return 0.5 * GRAVITY * time * time;
}
