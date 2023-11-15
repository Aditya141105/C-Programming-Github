#include <stdio.h>
#include <string.h>

int main()
{

     int choice, length = 0, len, check;
     char a[100], b[100];
     char rev[100];

     printf("Enter your choice\n1) Length Of String: \n2) Reverse of String\n3) Comparison of 2 Strings\n");
     scanf("%d", &choice);

     switch (choice)
     {
     case 1:
          printf("\nEnter a String: ");
          scanf("%s", a);
          for (int i = 0; a[i] != '\0'; i++)
          {
               length++;
          }
          printf("The length of %s is: %d ", a, length);
          break;
     case 2:
          printf("Enter a String: ");
          scanf("%s", a);
          len = strlen(a);
          printf("The reverse of a String is: ");
          for (int i = len - 1; i >= 0; i--)
          {
               printf("%c", a[i]);
          }
          break;
     case 3:
          printf("Enter 1st String: ");
          scanf("%s", a);
          printf("\nEnter 2nd String: ");
          scanf("%s", b);
          for (int i = 0; a[i] != '\0'; i++)
          {
               length++;
          }
          for (int j = 0; a[i] != '\0'; i++)
          {
               length++;
          }
          // if(a==b){
          //           printf("The Entered 2 Strings are equal");
          //      }
          //      else{
          //           printf("\nThe entered 2 Strings are not equal");
          //      }
          break;

     default:
          printf("Invalid Number! enter a valid number");
     }

     return 0;
}