/* Name: Michael Marotich
 * userID: mjmaroti
 * Date: 10/4/2024^
 */
#include <stdio.h>

int main()
{
        //declare variables
        int pos,i,x;
        //Get user input for number of lines
        printf("please enter a position integer: ");
        scanf("%d", &pos);
        //set i here to begin so x can work
        i = 1;
        //Have it so that when x is less than position it will go through the inner for loop
        for ( ;i <= pos; )
        {
                // reset variables for the cycle
                x = i + 1;
                i = 1;
                // print a star x amount of times until i is greater than x
                for ( ;x > i; )
                {
                        printf("*");
                        i = i + 1;
                }
                //now that proper amount of stars have been print a new line
                printf("\n");
        }
        return 0;
}
