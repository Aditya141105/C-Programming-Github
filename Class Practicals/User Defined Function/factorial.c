#include<stdio.h>

int fact1(int n);
int fact2();
void fact3(int n);
void fact4();

int main(){

     // int n;

     // printf("Enter a number: ");
     // scanf("%d", &n);

     // printf("The factorial of %d is %d", n, fact1(n));

     // fact2();

     // fact3(n);

     fact4();

     return 0;
}

int fact1(int n){
     int fact=1;

     if(n==0){
          return 1;
     }
     else{
          for(int i=1; i<=n; i++){
               fact*=i;
          }
     }

     return fact;
}

int fact2(){
     int fact=1, n;
     printf("Enter a number: ");
     scanf("%d", &n);
     if(n==1){
          return 0;
     }
     else{
          for(int i=1; i<=n; i++){
               fact*=i;
          }
     }

     printf("The factorial of %d is %d", n, fact);
}

void fact3(int n){
     int fact=1;
     if(n==0){
          printf("1");
     }
     else{
          for(int i=1; i<=n; i++){
               fact*=i;
          }
     }
     printf("The factorial of %d is %d", n, fact);
}

void fact4(){
     int fact=1, n;
     printf("Enter a number: ");
     scanf("%d", &n);
     if(n==0){
          printf("1");
     }
     else{
          for(int i=1; i<=n; i++){
               fact*=i;
          }
     }   
     printf("The factorial of %d is %d", n, fact);
}