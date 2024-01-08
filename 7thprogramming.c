#include <stdio.h>

int main() {
 char str[100];  // Array to store the input string
 int alphabets = 0, digits = 0, specialChars = 0;  // Counters for each character type
 int i = 0;  // Loop counter

 printf("Enter a string: ");
 fgets(str, sizeof(str), stdin);

 // Iterate through each character in the string
 while (str[i] != '\0') {
   if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
     alphabets++;  // Increment alphabets count
   } else if (str[i] >= '0' && str[i] <= '9') {
     digits++;  // Increment digits count
   } else {
     specialChars++;  // Increment special characters count
   }
   i++;  // Move to the next character
 }

 printf("Number of alphabets: %d\n", alphabets);
 printf("Number of digits: %d\n", digits);
 printf("Number of special characters: %d\n", specialChars);

 return 0;
}
