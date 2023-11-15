#include<stdio.h>

int main(){

     int rows;
     int i=1;
     int j=0;
     printf("Enter number of rows: ");
     scanf("%d", &rows);

     while(i<=rows){
          while(j<=i){
               printf("%d\t", j);
               j++;
          }
          i++;
          printf("%d\t", i);
          printf("\n");
     }

     return 0;
}