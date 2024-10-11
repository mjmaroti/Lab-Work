/* Name: Michael Marotich, Isiah Hilkemann, Ryan McCabe
 * User: mjmaroti, ihilkema, rsmccabe
 * Date: 10/11/2024
 */
#include <stdio.h>

//TODO: prototype here
double myabs(double x);

int main()
{
        double data;
        data = -3.4;
        printf("abs(%f)=%f\n", data, myabs(data));
        data = 3.4;
        printf("abs(%f)=%f\n", data, myabs(data));
}
//TODO: function implementation here
double myabs(double x)
{
        //If the integer is less than zero than the fake absolute value will kick in
        if (x < 0)
        {
                // abs value only gives positive values, so if less than zero multiply by neg. 1
                x = x*-1.0;
        }
        //return the variable whether or not it was effected
        return(x);
}
