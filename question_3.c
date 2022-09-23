//3. Write a program which takes the day number of a week and displays a unique\
greeting message for the day.
#include<stdio.h>
#include<conio.h>
int main()
{
    int D_num;
    printf("Enter Day number:\n");
    scanf("%d",&D_num);
    switch (D_num)
    {
    case 1:
        printf("Sunday\tHappy Sunday\n");
        break;
    case 2:
        printf("Monday\tLazy day\n");
        break;
    case 3:
        printf("Tuesday\tFocused day\n");
        break;
    case 4:
        printf("Wednesday\tPrdocutive day\n");
        break;
    case 5:
        printf("Thrusday\tBakwaas day\n");
        break;
    case 6:
        printf("Friday\tExcitment day\n");
        break;
     case 7:
        printf("Saturday\tParty day\n");
        break;
    default:
    printf("Please enter valid input\n");
        break;
    }
    getch();
    return 0;
}