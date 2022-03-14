//Swap two numbers //

#include<stdio.h>
void main()
{
    int first,second,temp;
    printf("Enter first and second number");
    scanf("%d%d",&first,&second);
      printf("numbers before swapping:%d%d\n",first,second);
    temp=first; //2//
    first=second; //3//
    second=temp; //2//
    printf("numbers after swapping:%d%d",first,second);
}
