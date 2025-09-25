//program to calculate surface area of a cylinder
#include <stdio.h>
#define PI 3.1416

int main() {
    float radius, height, surfaceArea;

    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);

    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);

    // Calculate the surface area
    surfaceArea = 2 * PI * radius * (radius + height);

    printf("Surface area of the cylinder = %.2f\n", surfaceArea);

    return 0;
}