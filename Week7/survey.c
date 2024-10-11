//@author Isaiah Hilkemann, Ryan McCabe, Michael Marotich
//@email ihilkema@mtu.edu
//date 10/11/2024

#include <stdio.h>


int main(){

//declare array
int data[12]={1,3,5,4,7,2,99,16,45,67,89,45};

//declare sum 
int sum = 0;

//add array values
for (int i = 0; i < 12; i++){
	sum = sum + data[i];
}

//print the total value of the array
printf("%d\n",sum);

}
