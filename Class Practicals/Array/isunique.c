#include <stdio.h>

int main() {
    int arr[100]={14,25,10,20,11,14,20};

    // printf("Enter elements of first array: ");

    // for(int a=0; a<5; a++){
    //     scanf("%d", arr[a]);
    // }

    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Unique elements in the array are: ");

    for (int i = 0; i < n; i++) {
        int isUnique = 1; // Assume the element is unique initially

        for (int j = 0; j < n; j++) {
            if (i != j && arr[i] == arr[j]) {
                isUnique = 0; // Found a duplicate, mark it as not unique
                break;
            }
        }

        if (isUnique) {
            printf("%d ", arr[i]);
        }
    }

     return 0;
}