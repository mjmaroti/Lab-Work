// name: Michael Marotich, Ryan McCabe, Isaiah Hilkemann
// email: mjmaroti@mtu.edu
// 9/13/2024
#include <stdio.h>
#include <math.h>
int main()
{
        //set variables
        int depth;
        printf("How deep is the lake in meters? ");
        scanf("%d", &depth);
        //determine the proper print command
        if (depth <= 12)
        {
                printf("You can dive in it if you are a beginner.\n");
        }
        else if (depth <= 30)
        {
                printf("You can dive in this if you are a trained professional.\n");
        }
        else if (depth > 30)
        {
                printf("You will have to be a professional and you will have to make preparations.\n");
        }
        //Solve for the pressure of the water in kPa
        int P,p,g;
        p = 1000;//(pow,(depth,3));
        g = 9.81;
        P = (p*g*depth)/1000;
        printf("The pressure at the deepest point is %d kPa.\n", P);
        return 0;
}
