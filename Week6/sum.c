//10/4/24
//Ryan McCabe
//A code that prints a list of numbers and adds them together.


#include<stdio.h>

int main() {
    int pos_int, i, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &pos_int);

    // Calculate the sum of integers from 1 to pos_int
    for(i = 1; i <= pos_int; ++i) {
        sum += i;
    }

    // Print the sum in the form: 1 + 2 + 3 + ... + n
    for(i = 1; i <= pos_int; ++i) {
        if(i == pos_int) {
            printf("%d", i); // Last number, no '+' symbol
        } else {
            printf("%d + ", i); // Intermediate numbers
        }
    }

    // Print the total sum
    printf(" = %d\n", sum);

    return 0;
}
