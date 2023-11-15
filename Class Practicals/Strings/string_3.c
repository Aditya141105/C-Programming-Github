#include<stdio.h>
#include<string.h>

int main(){

     char s1[5];
     int i;
     char ch;

     printf("Enter 5 characters: ");

     for(i=0; i<5; i++){
          scanf("%c\n", &s1[i]);
     }

     for(i=0; i<5; i++){
          for(int j=i+1; j<5; j++){
               if(s1[i]>s1[j]){
                    ch=s1[i];
                    s1[i]=s1[j];
                    s1[j]=ch;
               }
          }
     }

     printf("After Sorting Of String: ");

     for(i=0; i<5; i++){
          printf("%c ", s1[i]);
     }

     return 0;
}