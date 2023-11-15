#include<stdio.h>

int main(){

     int arr1[5];
     int i;

     printf("Enter elements of first array: ");

     for(i=0; i<5; i++){
          scanf("%d", &arr1);
     }

     // For Odd

     for(i=0; i<5; i++){
          if(arr1[i]/2==0){
               printf("%d", a[i]);
          }
     }

     return 0;
}