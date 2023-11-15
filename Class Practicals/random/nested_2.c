#include <stdio.h>

int main()
{

     int rows;
     int i = 1, k = 1, l = i - 1, j = (rows - 1);

     printf("Enter number of rows: ");
     scanf("%d", &rows);

     for (int i = 1; i <= rows; i++)
     {
          for (int j = (rows - 1); j >= i; j--)
          {
               printf(" ");
          }
          for (int k = 1; k <= i; k++)
          {
               printf("%c", (k + 64));
          }
          for (int l = i - 1; l >= 1; l--)
          {
               printf("%c", (l + 64));
          }

          printf("\n");
     }

     for (int a = (rows - 1); a >= 1; a--)
     {
          for (int b = a; b <= (rows - 1); b++)
          {
               printf(" ");
          }
          for (int c = 1; c <= a; c++)
          {
               printf("%c", c + 64);
          }
          for (int d = a - 1; d >= 1; d--)
          {
               printf("%c", d + 64);
          }
          printf("\n");
     }

     // while(i<=rows){
     //      while(j>=i){
     //           printf(" ");
     //           j--;
     //      }
     //      while(k<=i){
     //           printf("%c", (k+64));
     //           k++;
     //      }
     //      while(l>=1){
     //           printf("%c", (l+64));
     //           l--;
     //      }
     //      i++;
     // }

     return 0;
}