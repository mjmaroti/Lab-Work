/*textbooks.c
 * Isaiah Hilkemann, Michael Marotich, Ryan Mccabe
 *Week 3 lab Q3
 *9/13/24
 *evaluates the amount of textbooks someone bought
 */

#include <stdio.h>

int main(){
	
	int num = 0;
	
	printf("How many textbooks did you buy this semester?");

	scanf("%d", &num);

	switch(num){
		case 0:
			printf("you got away cheap!");
		break;
		case 1:
		case 2:
		case 3:
			printf("that's a normal amount");	
		break;
		default:
			if (num>=4)

			{
				printf("that's pretty expensive");
			}
			if (num<0)

			{
				printf("that's not an option!");
			}

	}


}
