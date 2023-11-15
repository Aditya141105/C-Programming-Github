#include <stdio.h>

int main() {
    int rows, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        // Print leading spaces
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // Print characters in ascending order
        for (j = 1; j <= i; j++) {
            printf("%c", 65 + j - 1);
        }

        // Print characters in descending order
        for (j = i - 1; j >= 1; j--) {
            printf("%c", 65 + j - 1);
        }

        printf("\n");
    }

    return 0;
}