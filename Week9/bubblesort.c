//Ryan McCabe
//10/25/24
//rsmccabe@mtu.edu
//A program that sorts out of order arrays


#include <stdio.h>

// Perform the bubble sort and print out of order steps
void bubbleSort(int array[], int size) {
    // Loop to access each array element
    for (int step = 0; step < size - 1; ++step) {
        // Initialize a flag to check if any swaps were made
        int swapped = 0;
        // Loop to compare array elements
        for (int i = 0; i < size - step - 1; ++i) {
            // Compare two adjacent elements
            if (array[i] > array[i + 1]) {
                // Print the out of order elements before swapping
                printf("Out of order: %d and %d\n", array[i], array[i + 1]);
                
                // Swapping occurs if elements are not in the intended order
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                swapped = 1; // Set swapped to true if a swap occurred
            }
        }
        // If no swaps were made, the array is already sorted
        if (swapped == 0) {
            break;
        }
    }
}

// Print array
void printArray(int array[], int size) {
    for (int i = 0; i < size; ++i) {
        printf("%d  ", array[i]);
    }
    printf("\n");
}

int main() {
    int data[] = {7, 2, 9,4 };
    // Find the array's length
    int size = sizeof(data) / sizeof(data[0]);

    bubbleSort(data, size);
    
    printf("Sorted Array in Ascending Order:\n");
    printArray(data, size);
    
    return 0;
}
