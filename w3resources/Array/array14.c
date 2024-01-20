#include <stdio.h>

int main() {
   int arr[100];  // Array to hold up to 100 elements
   int n, i, j, x;

  

   printf("Input the size of array : ");
   scanf("%d", &n);

  
   for (i = 0; i < n; i++) {
     
       scanf("%d", &arr[i]);
   }

   printf("Input the value to be inserted : ");
   scanf("%d", &x);



   // Find the position where the new element should be inserted
   for (i = 0; i < n; i++) {
       if (arr[i] < x) {
           break;
       }
   }

   // Shift elements to the right to make space for the new element
   for (j = n; j > i; j--) {
       arr[j] = arr[j - 1];
   }

   // Insert the new element at the correct position
   arr[i] = x;

   // Increase the size of the array
   n++;

   printf("\nAfter Insert the list is :\n");
   for (i = 0; i < n; i++) {
       printf("%d ", arr[i]);
   }



   return 0;
}
