/*Write a program in C to merge two arrays of the same size sorted in descending order.
Test Data :
Input the number of elements to be stored in the first array :3
Input 3 elements in the array :
element - 0 : 1
element - 1 : 2
element - 2 : 3
Input the number of elements to be stored in the second array :3
Input 3 elements in the array :
element - 0 : 1
element - 1 : 2
element - 2 : 3
Expected Output :
The merged array in decending order is :
3 3 2 2 1 1*/
#include<stdio.h>

int main(){
    //bubble sort
    printf("Enter your size:\t");
    int size,i=0,k=0,j=0;       //Declear the size for the Array **/
    
    scanf("%d",&size);  //it's taking size from the user**/

    int arr3[size],arr2[size];
    

for ( ; i < size; i++)  //For loop for the 1st array,taking input from the user **/
{
    printf("Enter the Number on the 1st array :");
    scanf("%d",&arr2[i]);
}
for ( ;  k< size; k++)  //For loop for the 2nd array , that taking input from the user **/
{
    printf("Enter the Number on the 2nd array :");
    scanf("%d",&arr3[k]);
}

int tmp=size+size;  //declear the Size of the mearg array **/
int mearg[tmp]; //declear the mearg array **/

for (int i = 0; i < size; i++) {
        mearg[2 * i] = arr2[i];
        mearg[2 * i + 1] = arr3[i];
    }
for (int i = 0; i < tmp - 1; i++) {  // Outer loop runs (tmp-1) times
    for (int j = 0; j < tmp - i - 1; j++) {  // Inner loop iterates through unsorted part
        if (mearg[j] < mearg[j + 1]) {  // Compare adjacent elements
            int temp = mearg[j];  // Swap elements if in ascending order
            mearg[j] = mearg[j + 1];
            mearg[j + 1] = temp;
        }
    }
}

for ( i=0 ; i < tmp; i++)   // these loop for the print the element of the mearg array **/
{
    printf("Your element is :%d\n",mearg[i]);
}


 return 0;
}
    
    
    

        
    
    
    
    
    
