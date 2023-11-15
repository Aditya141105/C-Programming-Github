#include<stdio.h>

     union book{
          int total;
          char title[100];
          char name[100];
          float amount;
     };

int main(){

     struct book book1, book2, book3;

     printf("\nThe size of char is %d", sizeof(char));
     printf("\nThe size of float is %d", sizeof(float));
     printf("\nThe size of struct is %d\n", sizeof(struct book));


     printf("Enter book 1 Author name: ");
     fflush(stdin);
     gets(book1.name);
     fflush(stdin);
     printf("Enter book 1 Title: ");
     fflush(stdin);
     gets(book1.address);
     fflush(stdin);
     printf("Enter book 1 price: ");
     scanf("%f", &book1.amount);
     printf("Enter Total number of books available: ");
     scanf("%d", &book1.total);

     printf("\n");

     printf("Enter book 1 Author name: ");
     fflush(stdin);
     gets(book2.name);
     fflush(stdin);
     printf("Enter book 1 Title: ");
     fflush(stdin);
     gets(book2.address);
     fflush(stdin);
     printf("Enter book 1 price: ");
     scanf("%f", &book2.amount);
     printf("Enter Total number of books available: ");
     scanf("%d", &book1.total);

     printf("\n");

     printf("Enter book 1 Author name: ");
     fflush(stdin);
     gets(book3.name);
     fflush(stdin);
     printf("Enter book 1 Title: ");
     fflush(stdin);
     gets(book3.address);
     fflush(stdin);
     printf("Enter book 1 price: ");
     scanf("%f", &book3.amount);
     printf("Enter Total number of books available: ");
     scanf("%d", &book1.total);

     printf("\n");

     printf("Book 1 Title is %s", book1.title);
     printf("Book 1 Author name is %s", book1.name);
     printf("Book 1 Price Amount is %s\n", book1.amount);
     
     printf("Book 2 Title is %s", book2.title);
     printf("Book 2 Author name is %s", book2.name);
     printf("Book 2 Price Amount is %s\n", book2.amount);

     printf("Book 3 Title is %s", book3.title);
     printf("Book 3 Author name is %s", book3.name);
     printf("Book 3 Price Amount is %s\n", book3.amount);


     return 0;
}