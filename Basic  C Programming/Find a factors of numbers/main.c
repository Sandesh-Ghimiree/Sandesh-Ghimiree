// Find the factor of a numbers  //

#include <stdio.h>

void main ()
{
    int num,i,fact=1;
    printf("Enter a numbers to find factors of a numbers");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    fact= fact * i;  // 1=1x1   2=1x2   6=2x3   24=6x4   120=24x5    5x4x3x2x1//
    printf("The factor of %d",num,fact);
}
