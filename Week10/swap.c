// Names: Michael Marotich, Ryan McCabe, Isaiah Hilkemann
// users: mjmaroti, rsmccabe, ihilkema
// 11/1/2024
#include<stdio.h>

int main()
{
        int a;
        int b;

        a = 1; b = 2;

        // Call function
        swap(&a,&b);

        printf("a = %d, b = %d\n", a, b);
        return 0;
}

// Calling by reference
void swap(int *x, int *y)
{
        // z is temperary value used for swapping.
        int z = *x;
        // swap the vales
        *x = *y;
        *y = z;
}
