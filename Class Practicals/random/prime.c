#include<stdio.h>

int main(){

     int num, a;
     int p;

     printf("What you have to find \n1) A prime number");
     printf("\nEnter a choice: ");
     scanf("%d", &num);

     // if(num==2){
     //      printf("The entered number is prime number");
     // }
     // else if(num%2==0 || num%3==0 || num%5==0 || num%7==0 || num%11==0){
     //      printf("The entered number %d is not a prime number", a);
     // }
     // else{
     //      printf("The entered number %d is prime number", a);
     // }

for(int i=1; i<num; i++){
         if(num==2){
          printf("Entered number is prime number");
         }
         else if(num%i==0 || num==1){
          printf("Entered number is not a prime number");
         }
         else{
          printf("The entered number is prime number");
         }
         break;}

     // switch (a)
     // {
     // case 1:
     //      printf("Please Enter a number: \n");
     //      scanf("%d", &num);
     //      if(num==3 || num==5 || num==7 || num==11 || num==1 || num==2){
     //           printf("It is a prime number");
     //      }
     //      else if(num%2==0 || num%3==0 || num%5==0 || num%7==0 || num%11==0){
     //           printf("The entered number is not a prime number");
     //      }
     //      else{
     //           printf("It is prime number");
     //      }
     //      break;
     
     // default:
     //      printf("Please Enter a correct choice");
     //      break;
     // }

     return 0;
}