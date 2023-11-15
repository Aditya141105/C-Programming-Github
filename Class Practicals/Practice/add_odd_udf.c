#include<stdio.h>

int n_odd(int num1, int num2);

int main(){

     int num1, num2, sum;

     printf("Enter a start point: ");
     scanf("%d", &num1);
     printf("Enter a end point: ");
     scanf("%d", &num2);

     sum=n_odd(num1, num2);
     printf("The sum of odd numbers of %d to %d is: %d", num1, num2, sum);

     return 0;
}

int n_odd(int num1, int num2){
     if(num1>num2){
          return 0;
     }
     else{
          return (num1 + n_odd(num1+2, num2));
     }
}