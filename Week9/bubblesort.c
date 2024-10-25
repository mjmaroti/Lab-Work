//Ryan McCabe, Michael Marotich, Isaiah Hilkemann
//10/25/24
//rsmccabe@mtu.edu
//A program that sorts out of order arrays


#include <stdio.h>

void bubbleSort(int array[], int size) {
    for (int step = 0; step < size - 1; ++step) {
        int swapped = 0;
        for (int i = 0; i < size - step - 1; ++i) {
            // Compare two adjacent elements
            if (array[i] > array[i + 1]) {
                // Print the out of order elements before swapping
                printf("Out of order, swapped: %d and %d\n", array[i], array[i + 1]);
                
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                swapped = 1; // Set swapped to true if a swap occurred
            }
        }
        
        if (swapped == 0) {
            break;
        }
    }
}


void printArray(int array[], int size) {
    for (int i = 0; i < size; ++i) {
        printf("%d  ", array[i]);
    }
    printf("\n");
}

int main() {
    int data[] = {-5,11,20, -3, };
    int size = sizeof(data) / sizeof(data[0]);

    bubbleSort(data, size);
    
    printf("Sorted Array in Ascending Order:\n");
    printArray(data, size);
    
    return 0;
}
