#include<stdio.h>

int main(){

     int arr[5], sum=0, avg;

     printf("Please enter any 5 numbers: \n");
     
     for(int i=0; i<5; i++){
          scanf("%d\n", &arr[i]);
          // sum+=arr[i];
     }
     for(int j=0; j<=4; j++){
          sum+=arr[j];
     }
     avg=sum/5;

     printf("The sum of entered 5 numbers is: %d\n", sum);
     printf("The average of entered 5 numbers is: %d", avg);
     return 0;
}