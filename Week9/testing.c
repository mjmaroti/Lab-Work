// Names: Michael Marotich, Ryan McCabe, Isaiah Hilkemann
// CS1111
// Date: 10/25/2024

#include<stdio.h>
#include<stdlib.h>

int main()
{
        // When testing, setting a smaller size will let it run faster.
        int size = 100000;
        // Dynamically allocate array - this isnt fitting on the stack
        int *array = malloc(size * sizeof(int));

        //Scan input.
        for(int i = 0; i < size; i++)
        {
                scanf("%d", array + i);
        }

        // Sorting func
        void insertionSort(int arr[], int n)
        {
                for(int i = 1; i < n; ++i)
                {
                        // Key is the current value of array. used for sorting.
                        int key = arr[i];
                        int x = i - 1;
                        // Move the parts of the array that are bigger than the key.. I am comparing the value behind to the
                        // current value. If The current value is bigger than the one behind it it will switch.
                        while (x >= 0 && arr[x] > key)
                        {
                                arr[x + 1] = arr[x];
                                x = x - 1;
                        }
                        // return value x back to normal if values were changed.
                        arr[x + 1] = key;
                }
        }
        insertionSort(array, size);
        //Print output
        for(int i = 0; i < size; i++)
        {
                printf("%d\n", array[i]);
        }

        // Free our dynamically allocated array.
        free(array);

        return 0;
}
