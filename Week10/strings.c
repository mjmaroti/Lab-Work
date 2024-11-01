// Names: Michael Marotich, Ryan McCabe, Isaiah Hilkemann
// CS1111
// ihilkema@mtu.edu, mjmaroti@mtu.edu, rsmccabe@mtu.edu
// 10/25/2025

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void bubbleSort(char **array, int size) {
    printf("Start: ");
    for (int i = 0; i < size; ++i) {
        printf("%s", array[i]);
        if (i < size - 1) printf(", ");
    }
    printf("\n");

    for (int step = 0; step < size - 1; ++step) {
        int swapped = 0;
        for (int i = 0; i < size - step - 1; ++i) {
            // Compare 2 adjacent values
            if (strncmp(array[i], array[i + 1], 20) > 0) {
                // Swap the strings
                char *temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                swapped = 1; // Mark if a swap occurs
            }
        }
        if (swapped == 0) {
            break;
        }
    }
}

void printArray(char **array, int size) {
    for (int i = 0; i < size; ++i) {
        printf("%s", array[i]);
        if (i < size - 1) printf(", ");
    }
    printf("\n");
}

int main() {
    const int size = 10;
    char **data = malloc(size * sizeof(char*));
    if (!data) {
        fprintf(stderr, "Failed to allocate memory for data array!\n");
        return -1;
    }

    FILE *file = fopen("numbers.txt", "r");
    if (!file) {
        fprintf(stderr, "Failed to open the file!\n");
        free(data);
        return -1;
    }

    char buffer[1024];
    int nameCount = 0;

    // Read the first line to get the number of strings (although it's fixed at 10)
    if (fgets(buffer, sizeof(buffer), file) != NULL) {
        // You can process this line if needed; it just confirms the count.
    }

    // Read the names from the file
    while (nameCount < size && fgets(buffer, sizeof(buffer), file) != NULL) {
        buffer[strcspn(buffer, "\n")] = '\0'; // Remove the newline character

        data[nameCount] = malloc(strlen(buffer) + 1);
        if (!data[nameCount]) {
            fprintf(stderr, "Failed to allocate memory for string!\n");
            fclose(file);
            return -1;
        }
        strncpy(data[nameCount], buffer, strlen(buffer) + 1); // Copy the string
        nameCount++;
    }

    fclose(file); // Close the file

    bubbleSort(data, nameCount);

    printf("Alphabetical array:\n");
    printArray(data, nameCount);

    // Free memory
    for (int i = 0; i < nameCount; ++i) {
        free(data[i]); // Free individual strings
    }
    free(data); // Free the array of pointers

    return 0;
}
