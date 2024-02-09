#include <stdio.h>

int main() {
    int rows, i, j;

    // Get the number of rows from the user
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Outer loop for each row
    for (i = 1; i <= rows; i++) {
        // Inner loop for printing spaces
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // Inner loop for printing stars and hashes
        for (j = 1; j <= i; j++) {
            // Print star in the first column
            if (j == 1) {
                printf("*");
            } else {
                // Print star or hash based on the value of j
                printf("%c ", j % 2 == 0 ? '*' : '#');
            }
        }

        printf("\n");
    }

    return 0;
}
