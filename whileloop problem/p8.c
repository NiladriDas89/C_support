#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
// Write a C program that calculates and prints the sum of cubes of even numbers up to a specified limit (e.g., 20) using a while loop.
void main(){
    int usr=2,usrlim,sum=0;
    int tmp;
    
    
    
    printf("Enter the number as 2nd limit :");
    scanf("%d",&usrlim);

    while (usr<=usrlim)
    {  
        
       
            tmp=usr*usr*usr;
            sum+=tmp;
    
          
       
         usr+=2;
        
    }
    if(sum==24200){
        printf("Program are working correctly !");
    }
     printf("%d\n",sum)   ;  


}