

/* Write a program in C to insert the values in the array (sorted list).
Test Data :
Insert New value in the sorted array :
-----------------------------------------
Input the size of array : 5
Input 5 elements in the array in ascending order:
element - 0 : 2
element - 1 : 5
element - 2 : 7
element - 3 : 9
element - 4 : 11
Input the value to be inserted : 8
The exist array list is :
2 5 7 9 11
After Insert the list is :
2 5 7 8 9 11
--------------------------------
Process exited after 39.33 seconds with return value 10
Press any key to continue . . .*/
/*void main(){









}*/
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
       if (arr[i] > x) {
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
