//complex_addition.c
//multiply and divide numbers using addition and subtraction
//Isaiah Hilkemann
//CS1111
//Week4 Lab Problem 5
//

#include <stdio.h>

int main(){
	//declare variables for imput
	int num1=0;
	int num2=0;

	printf("Enter 2 Numbers: "); //prompt user for imput

	scanf("%d %d",&num1, &num2); // assign user imput to variables

	int var1=num1;//vars for output formatting
	int var2=num2;

	int multiply=0; //declare multiply variable
		for(int i=0; i< num2;i++ ){//perform repeated addition
			multiply=num1+multiply;
		 }
		printf("%d*%d=%d\n",var1,var2,multiply);
	//declare division output variable
	int j=0;
	while (num1>=num2){//perform repeated subtraction and count
		num1=num1-num2;
	j++;}
		printf("%d/%d=%d\n",var1,var2,j);

	
return 0;
}
