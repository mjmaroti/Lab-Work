//Ryan McCabe, Michael Marotich and Isiah Hilkemann
//10/11/24
//Code that finds the max when entering three integers 

#include <stdio.h>

int max(int a, int b, int c);

int main() {
    int num1, num2, num3, maximum;

    // Read three integers from user
    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Call the max function
    maximum = max(num1, num2, num3);

    // Print the maximum value
    printf("The maximum value is: %d\n", maximum);

    return 0;
}

// Function definition (implementation)
int max(int a, int b, int c) {
    int maxVal = a; // Assume a is the maximum

    if (b > maxVal) {
        maxVal = b; // Update maxVal if b is greater
    }
    if (c > maxVal) {
        maxVal = c; // Update maxVal if c is greater
    }

    return maxVal; // Return the maximum value
}
