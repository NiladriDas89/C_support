/* WAP to take any 10 numbers and check whether they are divisible by 5 or not. If divisible then perform the following tasks:
a) Display all the numbers ending with the digit 5.
b) Count those numbers ending with 0 (zero).*/
#include <stdio.h>

int main() {
    int numbers[10], divisible_by_5_count = 0, ending_with_5_count = 0, ending_with_0_count = 0;

    // Get 10 numbers from the user
    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);

        // Check if divisible by 5
        if (numbers[i] % 5 == 0) {
            divisible_by_5_count++;

            // Check if ends with 5
            if (numbers[i] % 10 == 5) {
                ending_with_5_count++;
            }

            // Check if ends with 0
            if (numbers[i] % 10 == 0) {
                ending_with_0_count++;
            }
        }
    }

    // Print statistics
    printf("Numbers divisible by 5: %d\n", divisible_by_5_count);
    if (ending_with_5_count > 0) {
        printf("Numbers ending with 5: ");
        for (int i = 0; i < 10; i++) {
            if (numbers[i] % 10 == 5) {
                printf("%d ", numbers[i]);
            }
        }
        printf("\n");
    } else {
        printf("No numbers ending with 5 found.\n");
    }
    printf("Numbers ending with 0: %d\n", ending_with_0_count);

    return 0;
}
