// Names: Michael Marotich, Ryan McCabe, Isaiah Hilkemann
// CS1111
//ihilkema@mtu.edu, mjmaroti@mtu.edu, rsmccabe@mtu.edu
// 10/25/2025
//
#include<stdio.h>
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
                // Print the array
                for (int i = 0; i < n; ++i)
                {
                        printf("%d, ", arr[i]);
                }
                printf("\n");
        }

int main()
{
        int arr[] = {7, 4, 2, 9};
        int n = sizeof(arr) / sizeof(arr[0]);
        // Variables are declared, call functions
        insertionSort(arr, n);
        return 0;
}
