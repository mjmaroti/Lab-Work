//@author Isaiah Hilkemann, Michael Marotich, Ryan McCabe
//@email ihilkema@mtu.edu
//@date 10/11/2024

#include <stdio.h>

//max function prototype
int maxValue(int *array ,int  size);

//main
int main(){
	//declare arrays
	int a[6]={1,4,5,10,8,9};
	int b[8]={4,5,60,5,1,100,8,10};

	//call maxValue and print the resut
	printf("max in array a is %d \n", maxValue(a, 6));
	printf("max in array b is %d \n", maxValue(b, 8));

	return 0;
	}

//max function
int maxValue(int *array ,int  size){
 	
	//output variable
	int out = 0;
	//loop to find the maximum array value
	for(int i=0; i < size ; i++){
		//if if a given array value is larger than the previous values, assign it to the output
		if(array[i] > out){
	       		out = array[i];
			}	
	}
	return out;
	}
