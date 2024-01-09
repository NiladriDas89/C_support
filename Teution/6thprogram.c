#include<stdio.h>
/*int main(){
    char arr[200],arr2[200];
    gets(arr);
    gets(arr2);
    for(int i=0;arr[i]!='\0';i++){
        
        
           if( arr[i]==arr2[i]){
            printf("This string is same");
            break;

           }
           else if (arr2[i]=='\0'&&arr[i]=='\0')
           {
            printf("String is missmatch");
            break;
           }
           
           else{
            printf("String are not same");
            break;
          
           
           break;
        }
        

    }
}*/

#include <stdio.h>

int compareStringsASCII(char *str1, char *str2) {
  // Iterate through both strings simultaneously until a mismatch or null terminator is found
  while (*str1 && *str2) {
    if (*str1 != *str2) {
      // Characters don't match, so strings are not equal
      return 0;
    }

    // Compare ASCII values for explicit comparison
    if ((int)*str1 != (int)*str2) {
      return 0;
    }

    str1++;
    str2++;
  }

  // Check if both strings have reached their null terminators
  if (*str1 == *str2) {
    // If both are null, strings are equal
    return 1;
  } else {
    // One string is longer than the other, so they are not equal
    return 0;
  }
}

int main() {
  char str1[100], str2[100];

  printf("Enter the first string: ");
  fgets(str1, sizeof(str1), stdin);

  printf("Enter the second string: ");
  fgets(str2, sizeof(str2), stdin);

  // Remove potential trailing newline characters
  str1[strcspn(str1, "\n")] = '\0';
  str2[strcspn(str2, "\n")] = '\0';

  if (compareStringsASCII(str1, str2)) {
    printf("The strings are equal.\n");
  } else {
    printf("The strings are not equal.\n");
  }

  return 0;
}

