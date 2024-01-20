#include <stdio.h>

int main() {
   int arr[50], n, i, largest, secondLargest;

   printf("Input the size of the array : ");
   scanf("%d", &n);

   printf("Input %d elements in the array :\n", n);
   for (i = 0; i < n; i++) {
       printf("element - %d : ", i);
       scanf("%d", &arr[i]);
   }

   // Assuming array has at least two elements

   // Initialize largest and secondLargest to the first two elements
   if (arr[0] > arr[1]) {
       largest = arr[0];
       secondLargest = arr[1];
   } else {
       largest = arr[1];
       secondLargest = arr[0];
   }

   // Iterate through the remaining elements
   for (i = 2; i < n; i++) {
       if (arr[i] > largest) {
           secondLargest = largest;
           largest = arr[i];
       } else if (arr[i] > secondLargest && arr[i] != largest) {
           secondLargest = arr[i];
       }
   }

   printf("The Second largest element in the array is : %d\n", secondLargest);

   return 0;
}
