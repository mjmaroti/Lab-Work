// Names: Michael Marotich, Ryan McCabe, Isaiah Hilkemann
// CS1111
//ihilkema@mtu.edu, mjmaroti@mtu.edu, rsmccabe@mtu.edu
// 10/25/2025

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void bubbleSort(char **array, int size) {//bubble sort
    printf("Start: ");
    for (int i = 0; i < size; ++i) {
        printf("%s", array[i]);
        if (i < size - 1) printf(", ");
    }
    printf("\n");

    for (int step = 0; step < size - 1; ++step) {
        int swapped = 0;
        for (int i = 0; i < size - step - 1; ++i) {
            // compare 2 adjacent values
            if (strncmp(array[i], array[i + 1], 20) > 0) {
              
                
                // swap the strings
                char *temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                swapped = 1; // mark if a swap occurs

              
            }
        }
        
        if (swapped == 0) {
            break;
        }
    }
}

void printArray(char **array, int size) {//printing output
    for (int i = 0; i < size; ++i) {
        printf("%s", array[i]);
        if (i < size - 1) printf(", ");
    }
    printf("\n");
}

int main() {//main function
    const int size = 10;
    char **data = malloc(size * sizeof(char*));
    
    // data EVERYTHING AFTER THIS IS WHAT I EDITED. I HAVE NOT TRIED TO RUN IT
    char *buffer = malloc(1024);
    
    const char **numbers[] = malloc(sizeof(char*) * size);

    for(int i = 0; i < nameCount; i++)
    {
        fgets(buffer, 1024, stdin);
        buffer[strnlen(buffer, 1024) - 1] = 0;
        numbers[i] = malloc(strnlen(buffer, 1024) + 1);

        if(!numbers[i])
        {
            printf("Failed to allocate!\n");
            return -1;
        }

        strncpy(numbers[i], buffer, strnlen(buffer, 1024) + 1);
    }
    
    // I think this for loop is what was confusing, it may not be necessary
    /* for (int i = 0; i < size; ++i) {
        data[i] = malloc(20 * sizeof(char)); //string space
        strncpy(data[i],numbers[i], 20); //copy string
        data[i][19] = '\0';//string temination
    }
    */
    bubbleSort(data, size);
    
    printf("Alphabetical array:\n");
    printArray(data, size);
    
    // free memory
    for (int i = 0; i < size; ++i) {
        free(data[i]); // free strings
    }
    free(data); //free the array

    return 0;
}
