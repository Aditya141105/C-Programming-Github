// Not Completed
#include<stdio.h>

int main(){

     int arr1[5];
     int i, j;

     printf("Enter elements of first array: ");

     for(i=0; i<5; i++){
          scanf("%d", &arr1);
     }

     int n = sizeof(arr1) / sizeof(arr1[0]);

     for(i=0; i<n; i++){
          for(j=i+1; j<n; j++){
               if(arr1[i]==arr1[j]){
                    printf("%d", arr1[i]);
                    break;
               }
          }
     }

     return 0;
}