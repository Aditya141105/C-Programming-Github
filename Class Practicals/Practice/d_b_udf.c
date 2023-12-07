#include<stdio.h>

int d_b(int dec);

int main(){

     int dec, bin;

     printf("Enter a decimenal value: ");
     scanf("%d", &dec);

     bin=d_b(dec);
     printf("The converted binary form is: %d", bin);

     return 0;
}

int d_b(int dec){
     if(dec==0){
          return 0;
     }
     else{
          return (dec%2 + 10 * d_b(dec/2));
          // 14 = 0+10*(1+10*(1+10*(1)))
     }
}