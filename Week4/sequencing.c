//Ryan McCabe
//program sequencing is the fibonacci sequence
//9/20/24
//rsmccabe@mtu.edu


#include <stdio.h>

int main() {
int a, b, n;

// Recived the first two numbers and how many numbers to print
printf("Please enter two starting numbers (a, b) and the count (n): ");
scanf("%d %d %d", &a, &b, &n);

// Print the first two numbers
printf("%d %d ", a, b);

// Generate and print the Fibonacci sequence
for (int i = 2; i < n; i++) {
int next = a + b;  // Calculate the next number
printf("%d ", next); // Print the next number
a = b; // Update a to the previous b
b = next; // Update b to the newly calculated next
}

printf("\n"); // New line at the end
return 0;
}
