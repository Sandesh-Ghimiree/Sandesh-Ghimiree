#include<stdio.h>
void main()
{
    int choice;
    printf("enter any number between 1-7");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("Province No. 1");
        break;
          case 2:
        printf("Province No. 2");
        break;
          case 3:
        printf("Province No. 3");
        break;
          case 4:
        printf("Gandaki Pradesh");
        break;
          case 5:
        printf("Province No. 5");
        break;
          case 6:
        printf("Karnali Pradesh");
        break;
          case 7:
        printf("Sudurpashchim Pradesh");
        break;
        default:
        printf("WRONG CHOICE");
    }
}
