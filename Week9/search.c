// Isaiah Hilkemann, Michael Marotich, Ryan McCabe
// ihilkema@mtu.edu, mjmaroti@mtu.edu, rsmccabe@mtu.edu
// 10/25/2024


#include<stdio.h>

int search(int [],int , int );

int main(){
	
	int data[] = {2,3,4,6,7,8,9,10};
	
	int keys[]={3,5,7,9};

	for (int i = 0; i < 4; i++){

		int result = search(data,8,keys[i]);
		printf("%d\n",result);

	}

	return 0;}


int search(int data[],int size,int key){

	int left = 0;
	int right = size-1;
	while (left <= right){
		int mid = left + (right - left)/2;

		if (data[mid] == key){
			return mid;
			}
		else if (data[mid] < key){
			left = mid + 1;
		}
		else{
			right = mid - 1;}}
	return -1;
}

