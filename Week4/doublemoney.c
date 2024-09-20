/* Name: Michael Marotich
 * username: mjmaroti
 * date: 9/20/2024
 */
#include <stdio.h>
#include <math.h>
int main ()
{
        //Declare input variables for user input
        double percent,calc,timer;
        timer = 1;
        int years = 0;
        //ask user for percent input adn scan for it
        printf("What is the yearly return rate in percentage? ");
        scanf("%lf", &percent);
        //NOT using the rule of 72 I will make this code that uses a counter to find the years.
        calc = (percent/100)+1;
        while (timer < 2)
        {
                timer = timer*calc;
                years = years + 1;
        }
        //print statement that says how long it will take
        printf("With a return rate of %.2lf%, it will take %d years to double my money.\n", percent, years);
        return 0;
}
