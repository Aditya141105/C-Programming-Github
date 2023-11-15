#include<stdio.h>
#include<string.h>

int main(){

     char name[5][50], temp[20];
     int i, j;

     printf("Enter the name of 5 students: \n");

     for(i=0; i<5; i++){
          printf("Student %d: ", i+1);
          scanf("%s", name[i]);
     }

     for(i=0; i<4; i++){
          for(j=0; j<4; j++){
               if(strcmp(name[j], name[j+1])>0){
                    strcpy(temp, name[j]);
                    strcpy(name[j], name[j+1]);
                    strcpy(name[j+1], temp);
               }
          }
     }

     printf("\n");

     for(i=0; i<5; i++){
          printf("Student %d: %s\n", i+1, name[i]);
     }

     return 0;
}