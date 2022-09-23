//1. Write a program which takes the month number as an input and display number of\
days in that month.

#include<stdio.h>
#include<conio.h>
int main()
{
    int m_num;
    printf("Enter month number:\n");
    scanf("%d",&m_num);
    switch (m_num)
    {
    case 1:
        printf("January \t31 days");
        break;
    case 2:
        printf("february \t28 days");
        break;
    case 3:
        printf("March \t31 days");
        break;
    case 4:
        printf("April \t30 days");
        break;
    case 5:
        printf("May \t31 days");
        break;
    case 6:
        printf("June \t30 days");
        break;
    case 7:
        printf("July\t31 days");
        break;
    case 8:
        printf("August \t31 days");
        break;
    case 9:
        printf("September \t30 days");
        break;
    case 10:
        printf("October \t31 days");
        break;
    case 11:
        printf("November \t30 days");
        break;
    case 12:
        printf("December \t31 days");
        break;
    default:
        printf("Plzz.. enter correct input");
    }
    getch();
    return 0;
}