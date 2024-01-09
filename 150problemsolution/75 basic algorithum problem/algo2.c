/*Write a C program that will take a number as input and find the absolute difference between the input number and 51. /
/If the input number is greater than 51, it will return triple the absolute differenc*/


int dist(int usr,int fix){
    fix=50;
printf("Enter your Number :\t");
scanf("%d",&usr);
int tmp ;
if(usr<=fix){
 tmp= fix-usr;
printf("%d",tmp);
}
else if(usr>=fix){
    tmp=usr-fix;
    int tri= tmp*3;
    printf("%d",tri);
 
}
return 0;
}