#include<stdio.h>
void main()
{
    int choice;
    printf("enter any number between 1-7");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("SUNDAY");
        break;
          case 2:
        printf("MONDAY");
        break;
          case 3:
        printf("TUESDAY");
        break;
          case 4:
        printf("WEDNESDAY");
        break;
          case 5:
        printf("THURSDAY");
        break;
          case 6:
        printf("FRIDAY");
        break;
          case 7:
        printf("SATURDAY");
        break;
        default:
        printf("WRONG CHOICE");
    }
}