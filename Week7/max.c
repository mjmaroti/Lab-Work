//Ryan McCabe, Michael Marotich and Isiah Hilkemann
//10/11/24
//Code that finds the max when entering three integers 


#include <stdio.h>

int main() {
    int Int1, Int2, Int3;
    int maximum;

    // Read three integers
    printf("Enter three integers: ");
    scanf("%d %d %d", &Int1, &Int2, &Int3);

    // Find the maximum
    maximum = Int1; // Assume Int1 is the maximum
    if (Int2 > maximum) {
        maximum = Int2; // Update if Int2 is greater
    }
    if (Int3 > maximum) {
        maximum = Int3; // Update if Int3 is greater
    }

    // Print the result
    printf("The maximum is: %d\n", maximum);
    
    return 0;
}
