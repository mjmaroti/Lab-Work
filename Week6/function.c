//@author Isaiah Hilkemann
//@email ihilkema@mtu.edu
//@date 10/4/2024


#include <stdio.h>

//declare star func
int star(int i);


int main(){
	
	//declare imput
	int n;
	
	//user prompt
	printf("Please enter a positive integer:");
	
	//assign imput to variable
	scanf("%d",&n);
	
	//error message if number is not positive
	if(n<1){
		printf("That's not a positive number\n");
	}	
	

	//loop
	for(int i = 1; n>=i;i++){

		//call star function
		star(i);
	}
}
// define star function
int star(int i){
	
	//print number of stars equal to imput
	for(int j = 1; j<=i;j++){
		printf("*");
	}
	//formatting line
	printf("\n");
}
