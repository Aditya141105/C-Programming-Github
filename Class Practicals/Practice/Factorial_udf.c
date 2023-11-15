#include<stdio.h>
int fact(int num1);

int main(){

     int num1;
     printf("Please Enter a Number: ");
     scanf("%d", &num1);
     printf("The factorial of %d is %d", num1, fact(num1));

     return 0;
}

int fact(int num1){
     if(num1==0){
          return 1;
     }
     else if(num1==1){
          return 1;
     }
     else{
          return num1 * fact(num1-1);
     }

     
}