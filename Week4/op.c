// operation identifier
// Isaiah Hilkemann
// 9/20/2024
// Week 4 lab 4.1
//
#include<stdio.h>

int main(){

        char op; //declare impupt variable

        printf("please enter an op");//user prompt

        scanf("%c",&op);//read and assign user imput to variable

        switch(op){//Assigns each imput to print which operator it is
                case '+':
                        printf("Addition");
                        break;
                case '-':
                        printf("Subtraction");
                        break;
                case '*':
                        printf("Multiplication");
                        break;
                case '/':
                        printf("Division");
                        break;
                case '%':
                        printf("Modulo");
                        break;
                case '>':
                        printf("Greater Than");
                        break;
                case '<':
                        printf("Less Than");
                        break;
                case '!':
                        printf("Not");
                        break;
                default:
                        printf("Unknown");
        }
        return 0;
}
