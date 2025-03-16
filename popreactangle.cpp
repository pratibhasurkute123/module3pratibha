#include <stdio.h>

int main() {
    float length, breadth, area;

    // Loop to calculate the area of the rectangle once
    for (int i = 0; i < 1; i++) {
        printf("Enter the Length of the Rectangle: ");
        scanf("%f", &length);

        printf("Enter the Breadth of the Rectangle: ");
        scanf("%f", &breadth);

        // Calculate area
        area = length * breadth;

        // Display the result
        printf("The Area of the Rectangle is: %.2f\n", area);
    }

    return 0;
}
