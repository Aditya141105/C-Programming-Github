#include<stdio.h>

int main()
{
    int num[5], num2[5], temp, i, j, k, l;
    int a[10], b[5];

    printf("Enter elements of 1st array\n");

    for(i=0;i<5;i++)
    {
        printf("Enter Number-%d : ",i+1);
        scanf("%d",&num[i]);
    }

    printf("Enter elements of 2nd array\n");

    for(i=0;i<5;i++)
    {
        printf("Enter Number-%d : ",i+1);
        scanf("%d",&num2[i]);
    }
    
     for(i=0; i<5; i++){
         a[i]=num[i]; 
     }

     for(i=0; i<5; i++){
         a[i+4]=num2[i]; 
     }
     

    for(i=0; i<9; i++)
    {
        for(j=0; j<9; j++)
        {
            if(a[j] >= a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    printf("\n\nIn Ascending Order...\n");
    for(i=0; i<10; i++)
        printf("Number-%d : %d\n",i+1,a[i]);
    return 0;
}