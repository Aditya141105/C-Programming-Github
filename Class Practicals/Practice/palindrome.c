#include <stdio.h>
#include <string.h>

int ispalin(char *str)
{
     int start, end;
     start = 0;
     end = strlen(str) - 1;
     while (start < end)
     {
          if (str[start] != str[end])
          {
               return 0; // It is not a palindrome
          }
          start++;
          end--;
          return 1; // It is a palindrome
     }
}

int main()
{

     char str[100];

     printf("Emter a String: ");
     scanf("%s", str);

     if (ispalin(str))
     {
          printf("The given string is palindrome");
     }
     else
     {
          printf("The given string is not a palindrome");
     }

     return 0;
}