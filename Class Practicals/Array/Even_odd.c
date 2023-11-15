#include<stdio.h>

int main(){

     int arr[20];
     int e=1, o=1, p=1, n=1, z=1;

     printf("Enter 20 numbers: \n"); 

     for(int i=0; i<=19; i++){
          scanf("%d\n", &arr[i]);
     }
     printf("The 20 numbers you enter are: ");
     for(int j=0; j<=19; j++){
          printf("%d, ", arr[j]);
     }
     for(int k=0; k<=19; k++){
          if(arr[k]%2==0){
               e++;
          }
          if(arr[k]%2!=0){
               o++;
          }
          if(arr[k]>0){
               p++;
          }
          if(arr[k]<0){
               n++;
          }
          if(arr[k]==0){
               z++;
          }
     }

     printf("\nThe total no. of even numbers you entered is: %d", e);
     printf("\nThe total no. of odd numbers you entered is: %d", o);
     printf("\nThe total no. of positive numbers you entered is: %d", p);
     printf("\nThe total no. of negative numbers you entered is: %d", n);
     printf("\nThe total no. of zero numbers you entered is: %d", z);

     return 0;
}