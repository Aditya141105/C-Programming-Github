// Not Completed
#include<stdio.h>
int o_b(int oct);

int main(){

     int oct, bin;

     printf("Enter any octal value: ");
     scanf("%d", &oct);
     bin=o_b(oct);
     printf("The converted binary form is: %d", bin);

     return 0;
}

int o_b(int oct){
     if(oct==0){
          return 0;
     }
     else{
          return (oct%2+10*o_b(oct/2));
     }
}