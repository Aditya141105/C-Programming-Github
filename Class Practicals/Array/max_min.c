#include<stdio.h>

int main(){

     int a[5];
     int i, j, max, min;

     printf("Enter all elements of an array: ");

     for(i=0; i<5; i++){
          scanf("%d", &a[i]);
     }

     max=min=a[0];

     for(i=0; i<5; i++){
          if(a[i]>max){
               max=a[i];
          }
          if(min>a[i]){
               min=a[i]
          }
     }

     printf("The greater number obtained is: %d", max);
     printf("The smaller number obtained is: %d", min);

     return 0;
}