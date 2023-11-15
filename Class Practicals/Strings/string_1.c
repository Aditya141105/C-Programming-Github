#include<stdio.h>

int main(){

     // Counting the length

     char arr1[100];
     int count=0;

     printf("Enter a String: ");
     scanf("%s", arr1);

     for(int i=0; arr1[i]!='\0'; i++){
          count++;
     }
     printf("The length of String is: %d", count);

     // Reversing the String     

     return 0;
}

