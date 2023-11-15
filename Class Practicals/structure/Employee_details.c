#include <stdio.h>

struct employee
{
     char name[100];
     int age;
     float salary;

     struct address
     {
          char street[100];
          char city[100];
          char state[100];
     } add[500];

} emp[500];

int main()
{

     int i;

     printf("Enter the 5 employees: \n");

     for (i = 0; i < 5; i++)
     {
          printf("Enter the name of employee %d: ", i + 1);
          fflush(stdin);
          gets(emp[i].name);
          fflush(stdin);
          printf("Enter the street name of employee %d: ", i + 1);
          fflush(stdin);
          gets(emp[i].add[i].street);
          fflush(stdin);
          printf("Enter the city name of employee %d: ", i + 1);
          fflush(stdin);
          gets(emp[i].add[i].city);
          fflush(stdin);
          printf("Enter the state name of employee %d: ", i + 1);
          fflush(stdin);
          gets(emp[i].add[i].state);
          fflush(stdin);
          printf("Enter the age of employee %d: ", i + 1);
          scanf("%d", &emp[i].age);
          printf("Enter the salary of employee %d: ", i + 1);
          scanf("%f", &emp[i].salary);
     }

     for (i = 0; i < 5; i++)
     {
          printf("The name of employee %d is %s", i + 1, emp[i].name);
          printf("\nThe street name of employee %d is %s", i + 1, emp[i].add[i]);
          printf("\nThe city name of employee %d is %s", i + 1, emp[i].add[i].city);
          printf("\nThe state name of employee %d is %s", i + 1, emp[i].add[i].state);
          printf("\nThe age of employee %d is %d", i + 1, emp[i].age);
          printf("\nThe salary of employee %d is %f", i + 1, emp[i].salary);
     }

     return 0;
}