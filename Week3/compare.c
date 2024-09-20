#include<stdio.h>

int main(){
int num1,num2;
printf("Enter two numbers:\n");

scanf("%d",&num1,&num2);

if(num1==num2){
printf("Are the numbers equal? yes \n");
}
else{
printf("The numbers are not equal\n");
}

if(num1<num2){
printf("The first number is less than the second\n");
}
else{
printf("The first number is greater than the second\n");
return 0;
}


