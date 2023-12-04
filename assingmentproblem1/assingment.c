#include<stdio.h>
int main(){

   //Chose your function & call by the name :



    return 0;
}
void wellcome(){

//q_no 1 || 10
     printf("Wellcome");
     for (int i = 0; i < 9; i++)
     {
      printf("\nWellcome\n");
     }
     
}

void print_inti(){
    //q_no 2
    int num;

    printf("Enter a Intiger number :");
    
    scanf("%d",&num);
    
    printf("Your intiger number is %d",num);

}
void printowval(){
   //q_no 3
    int NUM1,NUM2,Fi;
    
    printf("Enter your 2 number :\n");
    
    scanf("%d %d",&NUM2,&NUM1);
    
    printf("Your 2 number is %d, %d Your Add number value is :%d ",NUM1,NUM2, Fi=NUM1+NUM2);


} 
void area_peri(){
    //q_no 4
    //BEFORE CALL THE FUNCTION SETUP THE <MATH.H> LIBARARY 
    //diameter formula is 2*r
    //AREA FORMULA IS PIE*R(2)
    //PERIMETER FORMULA IS 2*PIE*R
    #define pi 3.14159

    printf("This function will calculate the circule for diameter,Aera,Perimeter: ");

    float PERI,AREA,dia,R;

    printf("Ener your Redius value: \t");

    scanf("%f",&R);

    PERI= 2*((pi)*R);    AREA= pi*pow(R,2);    dia=2*R;
    
    printf("Your Calculate Area is :%f\n,Your Calculate perimiter is :%f\n,Yourcalculate diameter is :%f",PERI,AREA,dia);

}
void maxormin(){

        int ANUM,BNUM,out;
        printf("Input your number & calculate the What is MAX number \n");

        scanf("%d %d",&ANUM,&BNUM);

        

        out=(ANUM>BNUM)?ANUM:BNUM;

        printf("Your max number is :%d",out);

}
void disibleto(){
      int num;

    //q_no 6    
    printf("Enter any number: ");
    scanf("%d", &num);


    if((num % 5 == 0) && (num % 11 == 0))
    {
        printf("Number is divisible by 5 and 11");
    }
    else
    {
        printf("Number is not divisible by 5 and 11");
    }


}

void angle(){
//q_no 7
      int angle1, angle2, angle3;
  printf("Enter the three angles of the triangle: ");
  scanf("%d %d %d", &angle1, &angle2, &angle3);

  if (angle1 + angle2 + angle3 == 180 && angle1 > 0 && angle2 > 0 && angle3 > 0) {
    printf("The triangle is valid.\n");
  } else {
    printf("The triangle is not valid.\n");
  }
}
void leepyr(){
        
        //q_no 8
        int year;
        printf("Input the year:");
        scanf("%d",year);
        (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) ? printf("%d is a leap year\n", year) : printf("%d is not a leap year\n", year);





}
void divisiblet()
{//q_no 14
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    for(int i=1;i<num;i++){
            if ((i % 3 == 0) || (i % 5 == 0)) {
            printf("Number is divisible by \n%d\n",i);
} 
        
    }
    return 0;
}



void addnmun() {
//q_no13
  int n, i, sum = 0;

  printf("Enter the value of n: ");
  scanf("%d", &n);

  
  while (i <= n) {
    sum += i;
    i++;
  }

  
  printf("The sum of the first %d numbers is %d\n", n, sum);

  return 0;
}
void oddnum(){
  //q_no 12
  int odd,i=1;
  printf("Enter your name:\v");
  scanf("%d",&odd);
  for(;i<odd;i+=2){
     
      printf("Odd number is \n %d \n",i);  
  }
  

}
void salary(){
 float basic, gross, da, hra;
//q_no 9
   
    printf("Enter basic salary of an employee: ");
    scanf("%f", &basic);


   
    if(basic <= 10000)
    {
        da  = basic * 0.8;
        hra = basic * 0.2;
    }
    else if(basic <= 20000)
    {
        da  = basic * 0.9;
        hra = basic * 0.25;
    }
    else
    {
        da  = basic * 0.95;
        hra = basic * 0.3;
    }

    
    gross = basic + hra + da;

    printf("GROSS SALARY OF EMPLOYEE = %.2f", gross);


}
void even(){

  //q_no 15
  int odd,i=2;
  printf("Enter your range:\v");
  scanf("%d",&odd);
  for(;i<odd;i+=2){
     
      printf("Even number is \n %d \n",i);  
  }

}
void factorical(){
     //q_no 16
     int n,i;
     unsigned long long fact = 1;
     if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else {
        for (i = 1; i <= n; ++i) {
            fact *= i;
        }
        printf("Factorial of %d = %llu", n, fact);
    }


}
void primenonprime(){
        //q_no 17
        
        //prime number is a number that will only disibale/divided by one or won 
        
         int i, num, n, count;
   printf("Enter the range: ");
   scanf("%d", &n);
   printf("The prime numbers in between the range 1 to %d:",n);
   for(num = 1;num<=n;num++){
      count = 0;
      for(i=2;i<=num/2;i++){
         if(num%i==0){
            count++;
         break;
      }
   }
   if(count==0 && num!= 1)
      printf("%d ",num);
   }
}
void reversenum(){
//q_no 18
int n, reverse=0, rem;    
printf("Enter a number: ");    
  scanf("%d", &n);    
  while(n!=0)    
  {    
     rem=n%10;    
     reverse=reverse*10+rem;    
     n/=10;    
  }    
  printf("Reversed Number: %d",reverse);   

}
void sum_ofdigi(){
    
    //q_no19
    int n,sum=0,m;    
printf("Enter a number:");    
scanf("%d",&n);    
while(n>0)    
{    
m=n%10;    
sum=sum+m;    
n=n/10;    
}    
printf("Sum is=%d",sum); 
}
void fibonacci(){ 
    //q_no 20
    int n1=0,n2=1,n3,i,number;    
 printf("Enter the number of elements:");    
 scanf("%d",&number);    
 printf("\n%d %d",n1,n2);//printing 0 and 1    
 for(i=2;i<number;++i)//loop starts from 2 because 0 and 1 are already printed    
 {    
  n3=n1+n2;    
  printf(" %d",n3);    
  n1=n2;    
  n2=n3;    
 }  }


void amstrong(){
//q_no 21        
int n,r,sum=0,temp;    
printf("enter the number=");    
scanf("%d",&n);    
temp=n;    
while(n>0)    
{    
r=n%10;    
sum=sum+(r*r*r);    
n=n/10;    
}    
if(temp==sum){
printf("armstrong  number ");    }
else {   
printf("not armstrong number");    
} }
void gcdicm(){
    
}
