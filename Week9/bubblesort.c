//Ryan McCabe, Michael Marotich, Isaiah Hilkemann
//10/25/24
//rsmccabe@mtu.edu
//A program that sorts out of order arrays


#include <stdio.h>

void bubbleSort(int array[], int size) {
    printf("Start: ");
    for (int i = 0; i < size; ++i) {
        printf("%d", array[i]);
        if (i < size - 1) printf(", ");
    }
    printf("\n");

    for (int step = 0; step < size - 1; ++step) {
        int swapped = 0;
        for (int i = 0; i < size - step - 1; ++i) {
            // Compare two adjacent elements
            if (array[i] > array[i + 1]) {
                // Print the out of order elements before swapping
                printf("%d, %d (", array[i], array[i + 1]);
                
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                swapped = 1; // Set swapped to true if a swap occurred

                for (int j = 0; j < size; ++j) {
                    printf("%d", array[j]);
                    if (j < size - 1) printf(", ");
                }
                printf(") (%d, %d)\n", i, i + 1);
            }
        }
        
        if (swapped == 0) {
            break;
        }
    }
    printf("Done\n");
}

void printArray(int array[], int size) {
    for (int i = 0; i < size; ++i) {
        printf("%d", array[i]);
        if (i < size - 1) printf(", ");
    }
    printf("\n");
}

int main() {
    int data[] = {7, 4, 2};  // Example array
    int size = sizeof(data) / sizeof(data[0]);

    bubbleSort(data, size);
    
    printf("Sorted Array in Ascending Order:\n");
    printArray(data, size);
    
    return 0;
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
