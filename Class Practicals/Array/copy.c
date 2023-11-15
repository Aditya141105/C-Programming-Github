#include<stdio.h>

int main(){

     int arr1[5], arr2[5], arr3[5];
     int i, j;

     printf("Enter elements of first array: ");

     for(i=0; i<5; i++){
          scanf("%d", &arr1[i]);
     }

     printf("Enter elements of Second array: ");

     for(i=0; i<5; i++){
          scanf("%d", &arr2[i]);
     }

     for(i=0; i<5; i++){
          arr1[i]=arr2[i];
     }

     for(i=0; i<5; i++){
          printf("%d ", arr1[i]);
     }          

     return 0;
}