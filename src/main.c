#include <stdio.h>

// 1. **Calculate the area of a square** given the length of its side.
// 2. **Calculate the volume of a cube** given the length of its side.

float c_area(float side) {
    float ar = side * side;
    return ar;
}

float c_volume(float side) {
    float vol = side * side * side;
    return vol;
}

int main() {

    float side, area, volume; 
    
    printf("Enter the side lenght: ");
    scanf("%f", &side);

    area = c_area(side);
    volume = c_volume(side);

    printf("Square area: %.2f\n", area);
    printf("Cube volume: %.2f\n", volume);

    return 0;
}
