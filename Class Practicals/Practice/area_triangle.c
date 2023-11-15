#include<stdio.h>
#include<math.h>

int area(int a, int b, int c){
     if((a+b)>c && (a+c)>b && (b+c)>a){
     float s=(a+b+c)/2;
     float area=sqrt(s*(s-a)*(s-b)*(s-c));
     printf("The area of triangle is: %f", area);
     }
     else{
          printf("Triangle does not form");
     }
     return 0;
}

int main(){

     int a, b, c;

     printf("Enter length of side 1: ");
     scanf("%d", &a);
     printf("Enter length of side 2: ");
     scanf("%d", &b);
     printf("Enter length of side 3: ");
     scanf("%d", &c);
     area(a, b, c);

     return 0;
}