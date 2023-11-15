#include<stdio.h>
#include<string.h>

int main(){

     char s1[10], s2[10], s3[10];
     int a;

     printf("Enter a String: ");
     gets(s1);
     printf("You entered: ");
     puts(s1);
     a=strlen(s1);
     printf("The length of String is %d", a);

     // printf("Enter string 1: ");
     // gets(s1);0
     // printf("Enter string 2: ");
     // gets(s2);
     // a=strcmp(s1,s2);
     // if(a==0){
     //      printf("Two Strings are equal");
     // }
     // else{
     //      printf("Two Strings are not equal");
     // }

     // printf("Enter a String: ");
     // gets(s1);
     // printf("The reverse of String is: %s", strrev(s1));

     // printf("Enter string 1: ");
     // gets(s1);
     // printf("Enter string 2: ");
     // gets(s2);
     // strcat(s1,s2);
     // printf("The Entered Two Strings after concantenation is %s", s1);

     // printf("Enter string 1: ");
     // gets(s1);
     // printf("Enter string 2: ");
     // gets(s2);
     // strcpy(s1,s2);
     // printf("The Entered Two Strings after String Copying is %s", s1);

     return 0;
}