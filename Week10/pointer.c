//Ryan McCabe, Michael Marotich, and Isaiah Hilkemann

//11/1/2024
//a code that uses pointers
#include<malloc.h>
#include<stdio.h>
int main()
{
int num = 5;
double rate =5.4;
char letter = 'B';

int *numP;
double *rateP;
char *letterP;
numP= &num;
rateP= &rate;
letterP= &letter;

(*numP)++;
(*rateP)++;
(*letterP)++;

printf("numP: %d, *numP: %d\n",numP,*numP);
printf("rateP: %p, *rateP: %.1f\n", (void*)rateP,&rateP);
printf("letterP: %p, *letterP: %c\n", (void*)letterP,*letterP);

return 0;
}
