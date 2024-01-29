/*Write a C program to compute the sum of the two input values. If the two values are the same, /
/then return triple their sum.*/


int towinpu(int in1,int in2){

    printf("Enter your 1st number :\t ");
    scanf("%d",&in1);
    printf("Enter your 2nd number :\t");
    scanf("%d",&in2);
if(in1!=in2){
    printf("sum of tow value :%d",(in1+in2));

}
else{ int tmp =pow((in1+in2),3);
    printf("The sum of triple value we are retruning %d",tmp);
}


}
