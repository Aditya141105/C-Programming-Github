#include<stdio.h>

int main(){

     int rows;
     int i=1;
     printf("Enter the number of rows: ");
     scanf("%d", &rows);

     for(int i=1; i<=rows; i++){
          for(int j=1; j<=i; j++){
               if(j%2==1){
                    printf("1\t");
               }
               else{
                    printf("0\t");
               }
     }
          printf("\n");
     }

     // while(i<=rows){
     //      for(int j=1; j<=i; j++){
     //           if(j%2==1){
     //                printf("1\t");
     //           }
     //           else{
     //                printf("0\t");
     //           }
     // }
     // i++;
     // printf("\n");
     // }

     do{
          for(int j=1; j<=i; j++){
               if(j%2==1){
                    printf("1\t");
               }
               else{
                    printf("0\t");
               }
     }
     i++;
     printf("\n");
     }while(i<=rows);

     return 0;
}