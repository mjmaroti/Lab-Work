/* name: Michael Marotich
 * username: mjmaroti
 * date: 9/20/2024
 */
#include <stdio.h>
#include <math.h>
int main ()
{
        // Declaring varibles here.
        double N,est;
        //double x = 10.0;
        int i,count;
        count = 0;
        // Get user input for N and i
        printf("Give N and i: ");
        scanf("%lf %d", &N, &i);
        // Use provided formula to estimate the square root
        est = 10.0;
        while (count < i)
        {
                est = (est+N/est)/2;
                // x is being set to the new estimate after every loop
                count = count + 1;
        }
        // Print the final estimate
        printf("Estimate: %lf\n", est);
        return 0;
}
